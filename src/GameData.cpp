/*
 * GameData.cpp
 * GameData definition.
 *
 * Copyright (c) 2022, Thomas Truong.
 */

#include "GameData.h"

/**
 * Constructor: Creates and retrieves the required data.
 */
GameData::GameData() {
  readAnswerList();
  generateRandomAnswer();
}


/**
 * Reads the answer list file and puts every
 * answer into _possibleAnswers vector.
 */
void GameData::readAnswerList() {
  std::ifstream fin;

  // Open file.
  fin.open(_answerListPath);
  // Did it fail to open?
  if (fin.fail()) {
    exit(1);
  }

  /* Successfully opened file at this point. */
  std::string line;

  // Read every line.
  while (getline(fin, line)) {
    // Not a blank line.
    if (line != "") {
      // Add to vector.
      _possibleAnswers.push_back(line);
    }
  }
}


/**
 * Selects a random answer from _possibleAnswers
 * and stores into _answers.
 */
void GameData::generateRandomAnswer() {
  // Sets _answer to a random item from _possibleAnswers.
  _answer = _possibleAnswers[rand() % _possibleAnswers.size()];

  // Set the revealedLetters since its a brand new word.
  _revealedLetters = "";
  for (int i = 0; i < _answer.length(); i++) {
    _revealedLetters += "_";
  }
}


/**
 * Retrieves the answer.
 *
 * @return std::string - the answer. 
 */
std::string GameData::getAnswer() {
  return "anmswer: " + _answer;
}


/**
 * Retrieves the revealed letters.
 *
 * @return std::string - the answer. 
 */
std::string GameData::getRevealedLetters() {
  return _revealedLetters;
}
