/*
 * Node.h
 * Node declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef LINKEDLIST_NODE_H_
#define LINKEDLIST_NODE_H_

#include <iostream>

template<class T>
class LinkedList;

template<class T>
class Node {
 private:
  T _value;
  Node<T> *_next = nullptr;
  friend class LinkedList<T>;
  template<class U>
  friend std::ostream &operator<<(std::ostream &os, const Node<U> &n);

 public:
  explicit Node(T value);
};

#endif  // LINKEDLIST_NODE_H_
