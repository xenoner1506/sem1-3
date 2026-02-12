#include <iostream>

// Forward declaration
// return_type function_signatura
int prefix_increment(int&);
float prefix_increment(float&);
float prefix_increment(float&, int);
int postfix_increment(int&);
void print(int x);

using std::cout;
using std::endl;

int main() {
    int x = 0;
    cout << x << endl;
    cout << prefix_increment(x) << endl;
    // cout << postfix_increment(x) << endl;
    // cout << x << endl;
    float y = 0.00000f;
    cout << y << endl;
    cout << prefix_increment(y) << endl;
    print(y);
    // double d = 0.00000f;
    // cout << d << endl;
    // cout << prefix_increment(static_cast<float>(d)) << endl;
    return 0;
}

void print(int x) {
    // return;
    cout << '"' << x << '"' << endl;
}

int prefix_increment(int& value) {
    cout << "prefix_increment(int&)" << endl;
    // value = value + 1;
    value += 1;
    // ++value;
    return value;
}

float prefix_increment(float& value) {
    cout << "prefix_increment(float&)" << endl;
    // value = value + 1;
    value += 1.0f;
    // ++value;
    return value;
}

int postfix_increment(int& value) {
    int copy = value;
    // value = value + 1;
    value += 1;
    // ++value;
    return copy;
}