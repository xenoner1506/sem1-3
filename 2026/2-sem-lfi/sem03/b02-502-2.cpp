#include <iostream>

#ifndef N
#define N 10
#endif

int main() {
    int arr[N] = {0};
    for (int idx = 0; idx < N; ++idx) {
        std::cout << arr[idx] << std::endl;
    }
    return 0;
}