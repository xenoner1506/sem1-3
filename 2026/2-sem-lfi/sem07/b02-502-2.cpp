#include <iostream>

using namespace std;

struct Node {
  int field;
  Node *next;
};

struct List {
  Node *HEAD = nullptr;
  Node *TAIL = nullptr;
  Node *NIL = nullptr;
};

List *create_list() {
  List *list = new List();
  list->NIL = new Node();
  list->NIL->next = nullptr;
  list->HEAD = list->NIL;
  list->TAIL = list->NIL;
  return list;
}

void front_push(List *&list, int value) {
  if (list->HEAD == list->NIL) {
    list->HEAD = new Node();
    list->HEAD->field = value;
    list->HEAD->next = list->NIL;
    list->TAIL = list->HEAD;
    return;
  }
  Node *new_HEAD = new Node();
  new_HEAD->field = value;
  new_HEAD->next = list->HEAD;
  list->HEAD = new_HEAD;
}

void clear_list(List *&list) {
  Node *current = list->HEAD;
  Node *tmp = nullptr;
  while (current != list->NIL) {
    tmp = current->next;
    delete current;
    current = tmp;
  }
  list->HEAD = list->NIL;
  list->TAIL = list->NIL;
}

void destroy_list(List *&list) {
  clear_list(list);
  delete list->NIL;
  delete list;
  list = nullptr;
}

int main() {
  {
    List *list = create_list();
    front_push(list, 0);
    cout << list->HEAD->field << endl;
    destroy_list(list);
  }
  {
    List *list = create_list();
    front_push(list, 0);
    front_push(list, -1);
    front_push(list, -2);
    for (Node *current = list->HEAD; current != list->NIL;
         current = current->next) {
      cout << current->field << endl;
    }
    destroy_list(list);
  }
  {
    List *list = create_list();
    front_push(list, 0);
    front_push(list, -1);
    front_push(list, -2);
    for (Node *current = list->HEAD; current != list->NIL;
         current = current->next) {
      cout << current->field << endl;
    }
    clear_list(list);
    front_push(list, -2);
    front_push(list, -1);
    front_push(list, 0);
    for (Node *current = list->HEAD; current != list->NIL;
         current = current->next) {
      cout << current->field << endl;
    }
    destroy_list(list);
  }
  return 0;
}
