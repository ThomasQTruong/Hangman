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
