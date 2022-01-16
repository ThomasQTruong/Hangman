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

// Adds a node, value, to the linked list.
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

// Returns true if value is found, else returns false.
bool LinkedList::search(char value) {
  // For every item in the linked list.
  for (Node *i = _head; i != nullptr; i = i->_next) {
    // Value found.
    if (i->_value == value) {
      return true;
    }
  }
  // Value was not found.
  return false;
}

// Returns the size of the linked list.
size_t LinkedList::size() {
  return _size;
}

// Prints every item in the LinkedList formatted.
void LinkedList::print() {
  std::cout << "[";

  // Print out every node in the linked list. (Node's << operator is overloaded.)
  for (Node *i = _head; i != nullptr; i = i->_next) {
    std::cout << *i;

    if (i->_next != nullptr) {
      std::cout << ", ";
    }
  }

  std::cout << "]" << std::endl;
}
