#ifndef KMEDOIDS_CLOCK
#define KMEDOIDS_CLOCK

#include <iostream>
#include <chrono>
#include <string>
#include <iomanip>
// #include <cuda_runtime.h>
// #include "mpi.h"

class ChronoLogger
{
private:
    using Clock = std::chrono::high_resolution_clock;
    using TimePoint = std::chrono::time_point<Clock>;
    using Duration = std::chrono::duration<double>;

    bool debug;
    int rank;
    TimePoint start_time;
    TimePoint last_call_time;

public:
    ChronoLogger(bool argDebug, int r)
    {
        rank = r;
        debug = argDebug;
        if (!debug || rank != 0)
            return;
        start_time = Clock::now();
        last_call_time = start_time;
    }

    void reset()
    {
        if (!debug || rank != 0)
            return;
        start_time = Clock::now();
        last_call_time = start_time;
    }

    void log(const std::string &msg)
    {
        if (!debug || rank != 0)
            return;
        TimePoint now = Clock::now();

        Duration total_elapsed = now - start_time;
        Duration step_elapsed = now - last_call_time;
        last_call_time = now;
        if (rank == 0)
        {
            std::cout << std::fixed << std::setprecision(9)
                      << "[Total: " << std::setw(13) << total_elapsed.count() * 1000 << "ms] "
                      << "(Diff: " << std::setw(13) << step_elapsed.count() * 1000 << "ms) "
                      << ">> " << msg << std::endl;
        }
    }
};

#endif
