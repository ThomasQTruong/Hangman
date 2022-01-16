/*
 * LinkedList.cpp
 * LinkedList declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include "LinkedList.h"

/**
 * Destructor: deletes the Nodes of the LinkedList.
 */
template<class T>
LinkedList<T>::~LinkedList() {
  for (Node<T> *i = _head, *next; i != nullptr; i = next) {
    next = i->_next;  // Next pointer set to the node after i.
    delete i;         // Delete i.
  }
}


/**
 * Adds a node with a specific to the linked list.
 *
 * @param value - the value to add for the node.
 */
template<class T>
void LinkedList<T>::add(T value) {
  Node<T> *n = new Node<T>(value);
  _size++;

  if (_head == nullptr) {
    _head = n;
    _tail = n;
    return;
  }

  _tail->_next = n;
  _tail = _tail->_next;
}


/**
 * Returns true if value is found in the LinkedList, else returns false.
 *
 * @param value - the value to search for.
 * @return bool - true if found, false if not found.
 */
template<class T>
bool LinkedList<T>::search(T value) {
  // For every item in the linked list.
  for (Node<T> *i = _head; i != nullptr; i = i->_next) {
    // Value found.
    if (i->_value == value) {
      return true;
    }
  }
  // Value was not found.
  return false;
}


/**
 * Returns the size of the LinkedList.
 *
 * @return size_t - the amount of items in the LinkedList.
 */
template<class T>
size_t LinkedList<T>::size() {
  return _size;
}


/**
 * Prints every Node in the LinkedList formatted.
 */
template<class T>
void LinkedList<T>::print() {
  std::cout << "[";

  // Print out every node in the linked list. (Node's << operator is overloaded.)
  for (Node<T> *i = _head; i != nullptr; i = i->_next) {
    std::cout << *i;

    if (i->_next != nullptr) {
      std::cout << ", ";
    }
  }

  std::cout << "]" << std::endl;
}
