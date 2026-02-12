#include <iostream>
#include <chrono>

using std::cout;
using std::endl;

void print(int& x) {
    for (int idx = 0; idx < 10; ++idx) { }
}

int main() {
    int x = 0;
    auto start = std::chrono::system_clock::now();
    for (int idx = 0; idx < 1'000'000'000; ++idx)
        print(x);
    auto stop = std::chrono::system_clock::now();
    const std::chrono::duration<double> elapsed_seconds = stop - start;
    cout << elapsed_seconds << endl;
    return 0;
}