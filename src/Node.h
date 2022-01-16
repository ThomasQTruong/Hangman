/*
 * Node.h
 * Node declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef LINKEDLIST_NODE_H_
#define LINKEDLIST_NODE_H_

class Node {
 private:
  char _value;
  Node *_next = nullptr;
  friend class LinkedList;

 public:
  explicit Node(char value);
};

#endif  // LINKEDLIST_NODE_H_
