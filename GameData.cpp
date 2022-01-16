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
    switch (_answer[i]) {
      // Cases where we would want to keep the same characters.
      case ' ':
      case '/':
      case '-':
        _revealedLetters += _answer[i];
        break;

      // Normal character, proceed with masking it.
      default:
        _revealedLetters += "_";
    }
  }
}


/**
 * Retrieves the answer.
 *
 * @return std::string - the answer. 
 */
std::string GameData::getAnswer() {
  return _answer;
}


/**
 * Retrieves the revealed letters.
 *
 * @return std::string - the revealed letters. 
 */
std::string GameData::getRevealedLetters() {
  return _revealedLetters;
}


/**
 * Reveals a given letter from _revealedLetters.
 * Returns false if the given letter was revealed before/does not exist.
 * Otherwise, returns true if the given letter was revaled.
 * 
 * @param letter - the letter to reveal.
 */
bool GameData::revealLetter(char letter) {
  bool revealedAny = false;

  // For every letter in _answer.
  for (int i = 0; i < _answer.length(); i++) {
    // If letter found and not revealed already.
    if (letter == _answer[i] && letter != _revealedLetters[i]) {
      revealedAny = true;
      // Replace _ in _revealedLetters with letter.
      _revealedLetters[i] = letter;
    }
  }
  return revealedAny;
}
