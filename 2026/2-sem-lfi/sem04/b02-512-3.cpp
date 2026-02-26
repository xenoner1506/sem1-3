#include <iostream>
#include <random>

double* create_array(int N) {
    // double result[N] = {0};
    double *result = new double[N];
    return result;
}

void delete_array(double *ptr) {
    delete[] ptr;
    ptr = nullptr;
}

int main() {
    int N = 100'000'000;
    double *ptr = new double[N];
    for (int idx = 0; idx < N; ++idx) {
        ptr[idx] = idx;
    }
    // for (int idx = 0; idx < N; idx += 1'000) {
    //     std::cout << ptr[idx] << std::endl;
    // }
    delete[] ptr;
    ptr = new double;
    delete ptr;
    ptr = nullptr;
    // fictive 0, it is not real ZERO
    // std::cout << ptr << std::endl;
    // ...
    delete ptr;
    ptr = new double;
    // ...
    ptr = new double[123];
    // ...
    ptr = new double[1231235];
    return 0;
}