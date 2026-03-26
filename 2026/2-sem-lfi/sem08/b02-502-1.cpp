#include <iostream>
#include <string>

using namespace std;

enum MathOperators { minus = 45, plus = 43 };

int main() {
  string input;
  while (cin >> input) {
    // Do something;
    cout << "Someone put: " << input;
    if (input == "-" or input == "+") { // i td i tp
      cout << " it is math operator";
      switch (static_cast<int>(input)) {
      case MathOperators::minus:
        cout << " ho-ho-ho, it is minus";
        break;
      case MathOperators::plus:
        cout << " ho-ho-ho, it is plus";
        break;
      }
    }
    cout << endl;
  }
  return 0;
}
