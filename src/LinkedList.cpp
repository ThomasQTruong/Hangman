/*
 * LinkedList.cpp
 * LinkedList declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include "LinkedList.h"

// Destructor.
LinkedList::~LinkedList() {
  for (Node *i = _head, *next; i != nullptr; i = next) {
    next = i->_next;  // Next pointer set to the node after i.
    delete i;         // Delete i.
  }
}

void LinkedList::add(char value) {
  Node *n = new Node(value);
  _size++;

  if (_head == nullptr) {
    _head = n;
    _tail = n;
    return;
  }

  _tail->_next = n;
  _tail = _tail->_next;
}

size_t LinkedList::size() {
  return _size;
}

// Prints every item in the LinkedList formatted.
void LinkedList::print() {
  std::cout << "[";

  // Print out every node in the linked list. (Node's << operator is overloaded.)
  for (Node *i = _head; i != nullptr; i = i->_next) {
    std::cout << i;

    if (i->_next != nullptr) {
      std::cout << ", ";
    }
  }

  std::cout << "]";
}
