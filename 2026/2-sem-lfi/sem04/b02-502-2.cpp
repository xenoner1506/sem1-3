#include <iostream>

using std::cout;
using std::endl;

// int array[1'000'000] = {0};

int main() {
    int N = 10'000'000;
    double *ptr = new double[N];
    for (int idx = 0; idx < N; ++idx) {
        ptr[idx] = idx;
    }
    for (int idx = 0; idx < N; idx += 10'000) {
        // cout << ptr[idx] << endl;
    }
    cout << ptr << ' ' << &ptr << ' ' << &N << endl;
    delete[] ptr;
    ptr = nullptr;
    ptr = new double;
    *ptr = 12.234;
    cout << *ptr << ' ' << ptr[0] << ' ' << *(ptr + 0) << endl;
    delete ptr;
    cout << nullptr << ' ' << ptr << endl;
    ptr = nullptr;
    delete ptr;
    for (int idx = 0; idx < 10; ++idx) {
        ptr = new double[10];
        // ...
    }
    delete[] ptr;
    return 0;
}