#include <iostream>


int main() {
    int size = 0;
    std::cin >> size;
    int arr[size] = {0};
    for (int idx = 0; idx < size; ++idx) {
        std::cout << arr[idx] << std::endl;
    }
    return 0;
}