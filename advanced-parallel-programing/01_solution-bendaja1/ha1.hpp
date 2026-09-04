/*

AdvPara - NPRG058

Home Assignment 1

Lock-free structure

*/

#ifndef NPRG058_HA1_LOCKFREE_GUARD__
#define NPRG058_HA1_LOCKFREE_GUARD__

#include <atomic>
#include <vector>

const int MAX_THREADS = 64;
using thread_id = size_t;

template <typename T>
struct Node; // forward declaration

template <typename T>
struct alignas(16) ptr_v
{
	Node<T> *ptr;
	uint64_t version;
	Node<T> *operator->() const { return ptr; }
	bool operator==(const ptr_v<T> &other) const
	{
		return ptr == other.ptr && version == other.version;
	}

	bool operator!=(const ptr_v<T> &other) const
	{
		return !(*this == other);
	}
	ptr_v(Node<T> *p, uint64_t v) : ptr(p), version(v) {}
};

template <typename T>
struct Node
{
	T value;
	ptr_v<T> prev;
	Node(T v) : value(v), prev(nullptr, 0) {}
};

template <typename T>
class NodeRetirementManager
{
public:
	thread_id acquire_or_get_thread_id()
	{
		if (assingned_sid == MAX_THREADS)
		{
			assingned_sid = assigned_ctr.fetch_add(1, std::memory_order_relaxed);
			if (assingned_sid >= MAX_THREADS)
			{
				throw std::runtime_error("MAX_THREADS count exceeded");
			}
		}
		return assingned_sid;
	}

	void retire(ptr_v<T> to_retire)
	{
		/*
			Aparently pointer versioning solved the use-after-free and double free problems,
			cause deleting the pointer right away did not cause any issue during any of my tests.
			But let's keep delayed deletion dealocation as a good measure since it does not introduce
			much of an overhead
		*/
		// delete to_retire.ptr;
		// return;

		if (retired_list_len >= MAX_RETIRED)
		{
			ptr_v<T> to_delete = retired_list_head;
			retired_list_head = retired_list_head->prev;
			delete to_delete.ptr;
			retired_list_len--;
		}

		retired_list_len++;
		to_retire.version = 0;
		to_retire->prev = ptr_v<T>(nullptr, 0);
		if (retired_list_head.ptr == nullptr)
		{
			retired_list_head = to_retire;
			retired_list_last = to_retire;
		}
		else
		{
			retired_list_last->prev = to_retire;
			retired_list_last = to_retire;
		}
	}

private:
	const thread_id MAX_RETIRED = 256;
	static thread_local ptr_v<T> retired_list_head;
	static thread_local ptr_v<T> retired_list_last;
	static thread_local size_t retired_list_len;
	static thread_local thread_id assingned_sid;
	std::atomic<thread_id> assigned_ctr = 0;
};

template <typename T>
class LFStack
{
public:
	LFStack();
	void push(const T &v);
	T pop();
	bool empty() const;

private:
	std::atomic<ptr_v<T>> top;
	NodeRetirementManager<T> nrm;
	static thread_local uint64_t pushed_pointers;
};

template <typename T>
LFStack<T>::LFStack()
	: top(ptr_v<T>(nullptr, 0)),
	  nrm()
{
}

template <typename T>
void LFStack<T>::push(const T &v)
{
	uint64_t version = pushed_pointers * MAX_THREADS + nrm.acquire_or_get_thread_id();
	ptr_v<T> new_top = ptr_v(new Node(v), version);
	pushed_pointers++;
	// acquire barier prohibits scheduling of CAS prior to loading of fresh value of the top of the stack
	// which may cause bad evaluation of the compare condition
	ptr_v<T> old_top = top.load(std::memory_order_acquire);
	do
	{
		new_top->prev = old_top;
	} while (!top.compare_exchange_weak(old_top, new_top, std::memory_order_release, std::memory_order_relaxed));
	// release bariere prohibits scheduling of new_top preparation in do loop to some later point
	// In case of unsuccesful excahnge we don't need synchronization => std::memory_order_relaxed
}

template <typename T>
T LFStack<T>::pop()
{
	nrm.acquire_or_get_thread_id();
	ptr_v<T> old_top = top.load(std::memory_order_acquire);

	for (;;)
	{
		if (old_top.ptr == nullptr)
		{
			T value{};
			return value;
		}

		if (top.compare_exchange_weak(old_top, old_top->prev, std::memory_order_release, std::memory_order_relaxed))
		{
			T val = old_top->value;
			nrm.retire(old_top);
			return val;
		}
	}
}

template <typename T>
bool LFStack<T>::empty() const
{
	return top.load(std::memory_order_acquire).ptr == nullptr;
}

template <typename T>
thread_local ptr_v<T> NodeRetirementManager<T>::retired_list_head = ptr_v<T>(nullptr, 0);
template <typename T>
thread_local ptr_v<T> NodeRetirementManager<T>::retired_list_last = ptr_v<T>(nullptr, 0);
template <typename T>
thread_local size_t NodeRetirementManager<T>::retired_list_len = 0;
template <typename T>
thread_local thread_id NodeRetirementManager<T>::assingned_sid = MAX_THREADS; // MAX_THREADS == not yet assigned
template <typename T>
thread_local uint64_t LFStack<T>::pushed_pointers = 0;

#endif // !NPRG058_HA1_LOCKFREE_GUARD__
