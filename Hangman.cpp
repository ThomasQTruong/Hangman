/*
 * Hangman.cpp
 * Hangman definition.
 * Mimics the Hangman game, but in text form.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Hangman.h"
#include "GameData.h"

int main(void) {
  srand(time(0));

  data = GameData();

  do {
    // Grabs the guess from user input & registers the guess.
    registerGuess(getGuess());
    std::cout << std::endl;

    // Print the human out.
    printHuman(data.guesses.size());

    // Print the invalid guesses out.
    printGuesses();

    // Is the game still going on?
  } while (!gameEnded());

  // Print whether use won or lost.
  printWinLose(gameEnded());

  return 0;
}


/**
 * Asks the user for their guess.
 */
char getGuess() {
  char guess;

  std::cout << "Word/Phrase:" << std::endl;
  std::cout << data.getRevealedLetters() << std::endl << std::endl;
  std::cout << "Enter the letter you want to guess." << std::endl;
  std::cout << "Guess: ";
  std::cin >> guess;

  return guess;
}


/**
 * Registers the user's guess.
 * Adds to guessed letters list if invalid.
 * Reveals the letter if valid.
 * 
 * @param guess - the letter the user guessed.
 */
void registerGuess(char guess) {
  // Letter does not exist.
  if (!data.revealLetter(guess)) {
    // Letter not guessed already.
    if (!data.guesses.search(guess)) {
      data.guesses.add(guess);
    }
  }
}


/**
 * Prints the list of invalid guesses.
 */
void printGuesses() {
  std::cout << "Invalid Guesses: ";
  data.guesses.print();
}


/**
 * Draws a human based on the amount of invalid guesses.
 * 
 * @param amount - the amount of invalid guesses.
 */
void printHuman(int amount) {
  std::cout << "Human:" << std::endl;

  // Draw head.
  if (amount >= 1) {
    std::cout << " o " << std::endl;
  }
  // Draw body/arms.
  if (amount == 2) {
    std::cout << " | " << std::endl;
  } else if (amount == 3) {
    std::cout << "/|" << std::endl;
  } else if (amount >= 4) {
    std::cout << "/|\\" << std::endl;
  }
  // Draw legs.
  if (amount == 5) {
    std::cout << "/" << std::endl;
  } else if (amount == 6) {
    std::cout << "/ \\" << std::endl;
  }
}


/**
 * Checks whether the game ended or not.
 *
 * Returns 0 if game did not end yet.
 * Returns 1 if user won.
 * Returns 2 if user lost.
 */
int gameEnded() {
  // Fully guessed the word/phrase.
  if (data.getAnswer() == data.getRevealedLetters()) {
    return 1;
  }
  // Human fully drawn, lost!
  if (data.guesses.size() >= 6) {
    return 2;
  }
  // Still on-going.
  return 0;
}


/**
 * Prints whether the user won or lost.
 *
 * @param value - the value from gameEnded() which
 *                states whether user won or lost.
 */
void printWinLose(int value) {
  // Check and print win/lose.
  if (value == 1) {
    // Won.
    std::cout << "You won! :D" << std::endl;
  } else {
    // Lost.
    std::cout << "You lost! ;(" << std::endl;
    std::cout << "The answer was: " << data.getAnswer() << std::endl;
  }
}
