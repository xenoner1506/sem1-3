#include <iostream>

using std::cout;
using std::endl;

void print(int value) {
    // return;
    cout << '"' << value << '"' << endl;
}

int main() {
    int long_name_of_my_favorite_variable;  // = 3141592;
    int& ref = long_name_of_my_favorite_variable;
    cout << ref << ' ' << long_name_of_my_favorite_variable << endl;
    ++ref;
    cout << ref << ' ' << long_name_of_my_favorite_variable << endl;
    ++long_name_of_my_favorite_variable;
    cout << ref << ' ' << long_name_of_my_favorite_variable << endl;
    print(ref);
    return 0;
}