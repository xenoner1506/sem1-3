#include <iostream>

// Forward declaration
int prefix_increment(int&);
float prefix_increment(float&);
int postfix_increment(int&);

float power_sqr(float);
// int power_sqr(int);

using std::cout;
using std::endl;

int main() {
    int x = 1;
    cout << x << endl;
    cout << prefix_increment(x) << endl;
    cout << x << endl;
    float y = 12.5;
    cout << y << endl;
    cout << prefix_increment(y) << endl;
    double d = 12.5;
    cout << d << endl;
    cout << power_sqr(d) << endl;
    return 0;
}

int power_sqr(int value) {
    return value * value;
}

float power_sqr(float value) {
    return value * value;
}

// copy      != reference
// int value != int& value
int prefix_increment(int& value) {
    // ++value;
    // value = value + 1;
    value += 1;
    return value;
}

float prefix_increment(float& value) {
    value += 1;
    return value;
}

int postfix_increment(int& value) {
    int copy = value;
    value += 1;
    return copy;
}