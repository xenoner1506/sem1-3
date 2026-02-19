#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int idx = 0; idx < 100'000; ++idx) {
        cout << idx << ' ';
    }
    cout << endl;
    return 0;
}