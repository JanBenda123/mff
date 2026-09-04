#!/usr/bin/env python3
import sys
import random

from sorted_list import SortedList

# Jak velký test chceme?
n = 1000


def expect_items(sorted_list, elements):
    """Zkontroluje, zda sorted_list obsahuje danou posloupnost prvků."""

    this = sorted_list.first
    for x in elements:
        assert this, "Nalezen konec seznamu místo prvku {}".format(x)
        assert this.value == x, "Nalezen prvek {} místo {}".format(
            this.value, x)
        this = this.next

    assert not this, "Nalezen nadbytečný prvek {} na konci seznamu".format(
        this.value)


def test_insert_increasing():
    """Vloží prvky v rostoucím pořadí."""

    s = SortedList()
    for i in range(n):
        s.insert(i)
    expect_items(s, range(n))
    return s


def test_insert_decreasing():
    """Vloží prvky v klesajícím pořadí."""

    s = SortedList()
    for i in reversed(range(n)):
        s.insert(i)
    expect_items(s, range(n))


def test_insert_random():
    """Vloží prvky v náhodném pořádí."""

    random.seed(42)
    s = SortedList()
    for i in random.sample(range(n), k=n):
        s.insert(i)
    expect_items(s, range(n))


def test_delete_odd():
    """Smaže liché prvky."""

    s = test_insert_increasing()
    for i in range(n):
        if i % 2 == 1:
            s.delete(i)
    expect_items(s, [i for i in range(n) if i % 2 == 0])


def test_delete_increasing():
    """Smaže všechny prvky v rostoucím pořadí."""

    s = test_insert_increasing()
    for i in range(n):
        s.delete(i)
    expect_items(s, [])


def test_delete_decreasing():
    """Smaže všechny prvky v klesajícím pořadí."""

    s = test_insert_increasing()
    for i in reversed(range(n)):
        s.delete(i)
    expect_items(s, [])


def test_delete_random():
    """Smaže všechny prvky v náhodném pořadí."""

    s = test_insert_increasing()

    # Zamícháme range(n) a rozdělíme na dvě části
    random.seed(42)
    shuffled = random.sample(range(n), k=n)
    first = shuffled[:n//2]
    second = shuffled[n//2:]

    # Smažeme první část
    for i in first:
        s.delete(i)
    expect_items(s, sorted(second))

    # A pak i druhou
    for i in second:
        s.delete(i)
    expect_items(s, [])


def test_ins_del_multiple():
    """Zkontroluje, že opakovaný insert/delete nic nedělá."""

    s = SortedList()
    for i in range(n):
        s.insert(i)
    for i in range(n):
        s.insert(i)
    expect_items(s, range(n))

    for i in range(n):
        s.delete(i)
    for i in range(n):
        s.delete(i)
    expect_items(s, [])


def test_pred_succ_present():
    """Zkontroluje předchůdce a následníky přítomných prvků."""

    s = SortedList()
    for i in range(0, 10*n, 10):
        s.insert(i)
    expect_items(s, range(0, 10*n, 10))

    for i in range(0, 10*n, 10):
        pr = s.pred(i)
        if i == 0:
            assert pr is None, "Předchůdce prvku {} má být None, nikoliv {}".format(
                i, pr)
        else:
            assert pr == i - \
                10, "Předchůdce prvku {} má být {}, nikoliv {}".format(
                    i, i-10, pr)

        su = s.succ(i)
        if i == 10*(n-1):
            assert su is None, "Následník prvku {} má být None, nikoliv {}".format(
                i, su)
        else:
            assert su == i + \
                10, "Následník prvku {} má být {}, nikoliv {}".format(
                    i, i+10, su)


def test_pred_succ_missing():
    """Zkontroluje předchůdce a následníky nepřítomných prvků."""

    s = SortedList()
    for i in range(0, 10*n, 10):
        s.insert(i)
    expect_items(s, range(0, 10*n, 10))

    for i in range(-5, 10*n, 10):
        pr = s.pred(i)
        if i < 0:
            assert pr is None, "Předchůdce prvku {} má být None, nikoliv {}".format(
                i, pr)
        else:
            assert pr == i - \
                5, "Předchůdce prvku {} má být {}, nikoliv {}".format(
                    i, i-5, pr)

        su = s.succ(i)
        if i > 10*(n-1):
            assert su is None, "Následník prvku {} má být None, nikoliv {}".format(
                i, su)
        else:
            assert su == i + \
                5, "Následník prvku {} má být {}, nikoliv {}".format(
                    i, i+5, su)


tests = [
    ("insert_increasing", test_insert_increasing),
    ("insert_decreasing", test_insert_decreasing),
    ("insert_random", test_insert_random),
    ("delete_odd", test_delete_odd),
    ("delete_increasing", test_delete_increasing),
    ("delete_decreasing", test_delete_decreasing),
    ("delete_random", test_delete_random),
    ("ins_del_multiple", test_ins_del_multiple),
    ("pred_succ_present", test_pred_succ_present),
    ("pred_succ_missing", test_pred_succ_missing),
]

if __name__ == "__main__":
    for required_test in sys.argv[1:] or [name for name, _ in tests]:
        for name, test in tests:
            if name == required_test:
                print("Spouštím test {}".format(name), file=sys.stderr)
                test()
                break
        else:
            raise ValueError("Neznámý test {}".format(name))
