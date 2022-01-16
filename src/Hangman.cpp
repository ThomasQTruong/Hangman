/*
 * Hangman.cpp
 * Mimics the Hangman game, but in text form.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include <iostream>
#include "LinkedList.h"
#include "GameData.h"

int main(void) {
  srand(time(0));
  LinkedList guesses;

  GameData g = GameData();

  char t;
  do {
    std::cout << g.getAnswer() << std::endl;
    std::cout << g.getRevealedLetters() << std::endl;
    std::cin >> t;
    g.generateRandomAnswer();
  } while (t != 'x');

  return 0;
}
