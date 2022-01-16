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
  - It is a templated class; can hold/use any datatype.
  - Functions:
      - Node<T>::Node(T value) : _value(value)
        - Constructor, creates and sets the value for the node.
        - @param value - the value to set for the node.
      - std::ostream &operator<<(std::ostream &os, const Node<T> &n)
        - Operator overloading: return the value of the node.
        - @param os - the reference to the output stream.
        - @param n - the Node that will have it's value concatenated with os.
        - @return std::ostream& - the reference to the modified output stream.

<br/>

- LinkedList.h/.cpp
  - LinkedList declaration and definition.
  - It is a templated class; can hold/use any datatype.
  - Functions:
    - LinkedList<T>::~LinkedList()
      - Destructor: deletes the Nodes of the LinkedList.
    - void LinkedList<T>::add(T value)
      - Adds a node with a specific to the linked list.
      - @param value - the value to add for the node.
    - bool LinkedList<T>::search(T value)
      - Returns true if value is found in the LinkedList, else returns false.
      - @param value - the value to search for.
      - @return bool - true if found, false if not found.
    - size_t LinkedList<T>::size()
      - Returns the size of the LinkedList.
      - @return size_t - the amount of items in the LinkedList.
    - void LinkedList<T>::print()
      - Prints every Node in the LinkedList formatted.

<br/>

- GameData.h/.cpp
  - GameData declaration and definition.
  - Contains all of the game data.
  - Functions:
    - GameData::GameData()
      - Constructor: Creates and retrieves the required data.
    - void GameData::readAnswerList()
      - Reads the answer list file and puts every answer into _possibleAnswers vector.
    - void GameData::generateRandomAnswer()
      - Selects a random answer from _possibleAnswers and stores into _answers.
    - std::string GameData::getAnswer()
      - Retrieves the answer.
      - @return std::string - the answer.
    - std::string GameData::getRevealedLetters()
      - Retrieves the revealed letters.
      - @return std::string - the revealed letters.
    - bool GameData::revealLetter(char letter)
      - Reveals a given letter from _revealedLetters.
      - Returns false if the given letter was revealed before/does not exist.
      - Otherwise, returns true if the given letter was revaled.
      - @param letter - the letter to reveal.
