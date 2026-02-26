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

void delete_array(unsigned *ptr) {
    delete[] ptr;
    ptr = nullptr;
}

unsigned *generate_array(int N, std::default_random_engine& rng) {
    // State of random generator is changed due to forwarding by reference (&)
    std::uniform_int_distribution<unsigned> dstr(0, 999);
    unsigned *ptr = new unsigned[N];
    for (int idx = 0; idx < N; ++idx) {
        ptr[idx] = dstr(rng);
    }
    return ptr;
}

void increment(int& value) {
    value++;
}

int main() {
    // Fresh rng
    unsigned seed = 0;
    std::default_random_engine rng(seed);
    unsigned *first = generate_array(100, rng);
    // rng after 100 iterations
    unsigned *second = generate_array(100, rng);
    // rng after 200 iterations
    for (int idx = 0; idx < 100; ++idx) {
        std::cout << "ptr[" << idx << "] = " << first[idx] << ' ' << (first[idx] == second[idx]) << std::endl;
    }
    int N = 12;
    int *ptr_N = &N;
    std::cout << *ptr_N << ' ' << ptr_N[0] << ' ' << *(ptr_N + 0) << std::endl;
    delete_array(first);
    delete_array(second);
    int val = 123;
    std::cout << val << std::endl;
    increment(val);
    std::cout << val << std::endl;
    return 0;
}