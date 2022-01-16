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

template<class T>
class LinkedList {
 private:
  Node<T> *_head = nullptr;
  Node<T> *_tail = nullptr;
  size_t _size = 0;

 public:
  ~LinkedList();
  void add(T value);
  bool search(T value);
  size_t size();
  void print();
};

#endif  // LINKEDLIST_H_
