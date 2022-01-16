/*
 * Node.h
 * Node declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef LINKEDLIST_NODE_H_
#define LINKEDLIST_NODE_H_

#include <iostream>

template <class T>
class Node {
 private:
  T _value;
  Node *_next = nullptr;
  friend class LinkedList;
  friend std::ostream &operator<<(std::ostream &os, const Node<T> &n);

 public:
  explicit Node(T value);
};

#endif  // LINKEDLIST_NODE_H_
