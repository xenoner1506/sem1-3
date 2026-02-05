#include <iostream>

int main() {
    int x = 0, y = 0;
    float z = 0.0;
    x = 10 + 12;
    y = x * 5;
    // z = y;
    // z /= 7;
    z = static_cast<float>(x) / y;
    // ymnozhit_po_russki(x);
    std::cin >> z >> x >> y;
    for (int idx = 1; idx < 5; ++idx) {
        z *= 5.5;
    }
    std::cout << "Hello! " << x << ' ' << y << ' ' << z << std::endl;
    std::cout << z << ' ' << ++z << ' ' << z++  << ' ' << z << std::endl;
    x = y % 7;
    std::cout << x << std::endl;
    bool flag = 12;
    flag = false;
    if ((x < y) and (y > 10)) {
        std::cout << "X menshe Y" << std::endl;
    } else {
        std::cout << "Y menshe X" << std::endl;
    }
    while (x > 0) {
        ++x;
    }
    std::cout << --x << std::endl;
    return 0;
}