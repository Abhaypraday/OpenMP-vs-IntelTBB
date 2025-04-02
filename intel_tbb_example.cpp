// intel_tbb_example.cpp
#include <tbb/tbb.h>
#include <iostream>

void ParallelFunction() {
    tbb::parallel_for(0, 10, [](int i) {
        std::cout << "Executing iteration: " << i << "\n";
    });
}

int main() {
    ParallelFunction();
    return 0;
}
