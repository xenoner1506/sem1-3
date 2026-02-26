#include <iostream>

int main() {
    int N = 1'000'000, M = 124'534;
    double pi = 3.1415, e = 2., phi = 5.14;
    std::cout << &N << ' ' << &M << std::endl;
    std::cout << &pi << ' ' << &e << ' ' << &phi << std::endl;
    // std::cout << &e - &pi << std::endl;
    double *address_pi = &pi, *address_e = &e, *address_phi = &phi;
    std::cout << address_e - address_pi << std::endl;
    std::cout << address_phi - address_pi << std::endl;
    // std::cout << &M - &pi << std::endl;
    // std::cout << address_phi + address_e << std::endl;
    std::cout << address_pi + 2 << ' ' << phi << std::endl;
    *(address_pi + 2) = 1.61;
    std::cout << address_phi << ' ' << phi << std::endl;
    return 0;
}