/*
 * LinkedList.h
 * LinkedList declaration.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "Node.h"

class LinkedList {
 private:
  Node *_head = nullptr;

 public:
  ~LinkedList();
};

#endif  // LINKEDLIST_H_
