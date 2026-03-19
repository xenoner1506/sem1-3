#include <iostream>

using namespace std;

struct Node {
  int field;
  Node *next;
};

/*
void front_push(Node** HEAD, int value) {
  if (*HEAD == nullptr) {
    *HEAD = new Node();
    (*HEAD)->field = value;
    (*HEAD)->next = nullptr;
    return;
  }
  Node *new_HEAD = new Node();
  new_HEAD->field = value;
  new_HEAD->next = *HEAD;
}
*/

void front_push(Node *&HEAD, int value) {
  if (HEAD == nullptr) {
    HEAD = new Node();
    HEAD->field = value;
    HEAD->next = nullptr;
    return;
  }
  Node *new_HEAD = new Node();
  new_HEAD->field = value;
  new_HEAD->next = HEAD;
  HEAD = new_HEAD;
}

int main() {
  {
    Node *HEAD = nullptr;
    front_push(HEAD, 0);
    cout << HEAD->field << endl;
  }
  {
    Node *HEAD = nullptr;
    front_push(HEAD, 0);
    front_push(HEAD, -1);
    front_push(HEAD, -2);
    for (Node *current = HEAD; current != nullptr; current = current->next) {
      cout << current->field << endl;
    }
  }
  return 0;
}
