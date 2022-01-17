/*
 * Hangman.h
 * Hangman declaration.
 * 
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef HANGMAN_HANGMAN_H_
#define HANGMAN_HANGMAN_H_

// Function declarations.
char getGuess();
void registerGuess(char guess);
void printGuesses();
void printHuman(int amount);
int gameEnded();
void printWinLose(int value);

// Global variable(s)/object(s).
GameData data;

#endif  // HANGMAN_HANGMAN_H_
