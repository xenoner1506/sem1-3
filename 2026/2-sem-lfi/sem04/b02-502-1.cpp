#include <iostream>

using std::cout;
using std::endl;

int main() {
    int N = 1'000'000, M = 1234;
    double pi = 3.14, e = 2.;
    int *ptr_N = &N, *ptr_M = &M;
    double *ptr_pi = &pi, *ptr_e = &e;
    cout << &N << ' ' << ptr_N << ' ' << N << endl;
    cout << &M << ' ' << ptr_M << ' ' << M << endl;
    cout << &pi << ' ' << pi << endl;
    cout << &e << ' ' << e << endl;
    cout << ptr_M - ptr_N << endl;
    cout << ptr_e - ptr_pi << endl;
    // cout << ptr_e - ptr_N << endl;
    // cout << ptr_M + ptr_N << endl;
    cout << ptr_pi + 1 << ' ' << *(ptr_pi + 1) << endl;
    *(ptr_pi + 1) = 3.141592;
    *(ptr_pi + 100) = 3.141592;
    cout << ptr_pi + 1 << ' ' << *(ptr_pi + 1) << endl;
    return 0;
}