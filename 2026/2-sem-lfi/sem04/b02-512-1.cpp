#include <iostream>

int main() {
    int N = 1'000'000;
    // int arr[N];
    // for (int idx = 0; idx < N; ++idx) {
    //     arr[idx] = idx;
    // }
    int *address_of_N = &N;
    std::cout << &N << ' ' << address_of_N << std::endl;
    std::cout << N << ' ' << *address_of_N << std::endl;
    double pi = 3.1415;
    double *ptr = &pi;
    std::cout << ptr << std::endl;
    // std::cout << *ptr << std::endl;
    return 0;
}