#include <iostream>

#ifndef N
#define N 10
#endif

void print(int arr[]) {
    for (int idx = 0; idx < N; ++idx) {
        std::cout << arr[idx] << ' ';
    }
    // return;
    std::cout << std::endl;
}

void assign(int arr[]) {
    for (int idx = 0; idx < N; ++idx) {
        arr[idx] = idx;
    }
}

void swap(int& lhv, int& rhv) {
    int tmp = lhv;
    lhv = rhv;
    rhv = tmp;
}

int main() {
    int arr[N] = {0};
    float f = 1.14f;
    double d = 2.2225;
    assign(arr);
    swap(arr[2], arr[5]);
    print(arr);
    std::cout << &d << std::endl;
    std::cout << &f << std::endl;
    return 0;
}