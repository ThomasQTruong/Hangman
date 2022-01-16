/*
 * GameData.h
 * GameData declaration.
 * Contains all of the game data.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#ifndef HANGMAN_GAMEDATA_H_
#define HANGMAN_GAMEDATA_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class GameData {
 private:
  std::string _answerListPath = "words.txt";
  std::vector<std::string> _possibleAnswers;
  std::string _answer;
  std::string _revealedLetters;

 public:
  GameData();
  void readAnswerList();
  void generateRandomAnswer();
  std::string getAnswer();
  std::string getRevealedLetters();
};

#endif  // HANGMAN_GAMEDATA_H_
