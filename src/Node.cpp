/*
 * Node.cpp
 * Node definition.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include "Node.h"

Node::Node(char value) : _value(value) {
}

// Operator overloading: return the value of the node.
std::ostream &operator<<(std::ostream &os, const Node &n) {
  return os << n._value;
}
