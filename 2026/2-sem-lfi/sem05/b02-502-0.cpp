#include <iostream>

using std::cout;
using std::endl;

unsigned fib(unsigned N) {
    if (N < 2) {
        return 1;
    }
    return fib(N - 1) + fib(N - 2);
}

int main() {
    cout << fib(0) << endl;
    cout << fib(1) << endl;
    cout << fib(44) << endl;
    unsigned dp[44] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for (size_t idx = 2; idx < 44; ++idx) {
        dp[idx] = dp[idx - 1] + dp[idx - 2];
    }
    return 0;
}