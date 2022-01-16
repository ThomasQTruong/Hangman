# CS 008 Programming Project: Hang Man

## By <ins>Thomas Truong</ins>

# Features:
- Hangman.cpp
  - The game itself.
  - Functions:
    - ...

<br/>

- Node.h/.cpp
  - Node declaration and definition.
  - Functions:
      - Node(char value)
        - Constructor, creates and sets the value for the node.
        - @param value - the value to set for the node.
      - std::ostream &operator<<(std::ostream &os, const Node &n)
        - Operator overloading: return the value of the node.
        - @param os - the reference to the output stream.
        - @param n - the Node that will have it's value concatenated with os.
        - @return std::ostream& - the reference to the modified output stream.

- LinkedList.h/.cpp
  - LinkedList declaration and definition.
  - Functions:
    - ~LinkedList()
      - Destructor: deletes the Nodes of the LinkedList.
    - void add(char value)
      - Adds a node with a specific to the linked list.
      - @param value - the value to add for the node.
    - bool search(char value)
      - Returns true if value is found in the LinkedList, else returns false.
      - @param value - the value to search for.
      - @return bool - true if found, false if not found.
    - size_t size();
      - Returns the size of the LinkedList.
      - @return size_t - the amount of items in the LinkedList.
    - void print()
      - Prints every Node in the LinkedList formatted.
