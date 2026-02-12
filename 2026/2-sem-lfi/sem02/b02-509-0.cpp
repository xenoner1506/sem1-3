#include <iostream>

using namespace std;

int main() {
    // std::cout << "Hello, b02-509!" << std::endl;
    cout << "Hello, b02-509!" << endl;
    int idx = 0;
    for (idx = 5; idx < 10; ++idx) {
        cout << idx << ' ';
    }
    cout << endl;
    while (true) {
        // int c = 5;
        cout << idx << ' ';
        idx++;
        if (idx > 100) {
            break;
        }
    }
    {
        int idx = 1;
    }
    return 0;
}