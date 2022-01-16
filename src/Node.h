/*
 * Node.h
 * Node declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef LINKEDLIST_NODE_H_
#define LINKEDLIST_NODE_H_

#include <iostream>

class Node {
 private:
  char _value;
  Node *_next = nullptr;
  friend class LinkedList;
  friend std::ostream &operator<<(std::ostream &os, const Node &n);

 public:
  explicit Node(char value);
};

#endif  // LINKEDLIST_NODE_H_
