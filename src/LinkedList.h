/*
 * LinkedList.h
 * LinkedList declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include "string"
#include "Node.h"

class LinkedList {
 private:
  Node *_head = nullptr;
  Node *_tail = nullptr;
  size_t _size = 0;

 public:
  ~LinkedList();
  void add(char value);
  size_t size();
  void print();
};

#endif  // LINKEDLIST_H_
