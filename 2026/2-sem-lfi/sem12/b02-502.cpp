#include <iostream>
#include <string>

using namespace std;

struct Node {
  std::string key;
  int value;
  Node *next;
};

/*
 * key0 -> | hash_idx0 | value00 |
 * key1 -> | hash_idx1 | value10 | value11 | value12 |
 * key2 -> | hash_idx2 | value20 |
 * key3 -> | hash_idx3 | value30 | value31 |
 */
struct HashTable {
  unsigned int capacity; /// Size of initial storage
  unsigned int size;     /// <- number of elements

  Node **storage;
};

HashTable *create_table(unsigned int const capacity) {
  HashTable *table = new HashTable();
  table->capacity = capacity;
  table->size = 0;

  table->storage = new Node *[capacity];
  for (unsigned int i = 0; i < capacity; ++i) {
    table->storage[i] = nullptr;
  }

  return table;
}

/// string in C: char[] -> char* str = "...";
unsigned int hashFunc(HashTable *const &table, std::string const &key) {
  unsigned int idx = 0u;
  for (auto el : key) {
    // Some code
    idx += (static_cast<unsigned int>(el) - static_cast<unsigned int>('a'));
  }
  // key += "123";
  return idx % table->capacity;
}

void insert(HashTable *&table, std::string key, int value) {
  Node *new_node = new Node();
  new_node->key = key;
  new_node->value = value;
  new_node->next = nullptr;

  unsigned int idx = hashFunc(table, key);
  if (table->storage[idx] == nullptr) {
    table->storage[idx] = new_node;
  } else {
    Node *current = table->storage[idx];
    if (current->key == key) {
      current->value = value;
      delete new_node;
      return;
    }
    while (current->next != nullptr) {
      if (current->key == key) {
        current->value = value;
        delete new_node;
        return;
      }
      current = current->next;
    }
    current->next = new_node;
  }
}

void destroy_list(Node *&HEAD) {
  if (HEAD == nullptr) {
    return;
  }
  Node *current = HEAD;
  Node *next = HEAD->next;
  while (current != nullptr) {
    next = next->next;
    delete current;
    current = next;
  }
  HEAD = nullptr;
}

void destroy_table(HashTable *&table) {
  /// deelete all elements
  for (unsigned int idx = 0; idx < table->capacity; ++idx) {
    destroy_list(table->storage[idx]);
  }
  delete[] table->storage;

  delete table;
}

void print(HashTable *const &table) {
  for (unsigned int idx = 0; idx < table->capacity; ++idx) {
    if (table->storage[idx] != nullptr) {
      cout << "Hash of key is " << idx << ": ";
      Node *current = table->storage[idx];
      while (current->next != nullptr) {
        cout << current->value << ", ";
        current = current->next;
      }
      cout << current->value << endl;
    }
  }
}

int main() {
  HashTable *table = create_table(100);
  // insert(table, "a", +0);
  // insert(table, "b", +1);
  // insert(table, "c", -1);
  // insert(table, "d", -2);
  // insert(table, "d", +5);
  print(table);
  destroy_table(table);
  return 0;
}
