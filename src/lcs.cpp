/** 
 * University of La Laguna
 * ESIT
 * Grade in Computer Science
 * Subject: Diseño y análisis de algoritmos
 * Year: 3º
 * Project 7 - Longest common subsequence (lcs)
 * Author Christian J. Pérez Hernández alu0101030531@ull.edu.es
 * Date: 2020-03-27
 * File implementation of lcs
 * References:   Heading of the Task:
 *            https://campusvirtual.ull.es/1920/mod/assign/view.php?id=222013
 *
 * Version 1.0.0 
*/

#include "lcs.h"

#include <iostream>

/**
 * Constructor for the class given two strings
 */
Lcs::Lcs(std::string string1, std::string string2): string1_(string1), string2_(string2) {}

/**
 * Public function that calls the longestCommonSubsequence with the two strings
 */
int Lcs::longestCommonSubsequence() {
  std::cout << string2_.size() << "\n";
  return 1 + longestCommonSubsequence(string1_, string2_, string1_.size() - 1, string2_.size() - 1);
}

/**
 * Calculate the longest common subsequence using dynamic programming 
 */
int Lcs::longestCommonSubsequence(std::string string1, std::string string2, int pos1, int pos2) {
  if (pos1 == -1 || pos2 == -1) {
    return 0;
  } else if (string1[pos1] == string2[pos2]) {
    if (notIncluded(string2[pos2])) {
      longest_subsequence_.push_back(string2[pos2]);
    }
    return longestCommonSubsequence(string1, string2, pos1 - 1, pos2 - 1);
  } else {
    return std::max(longestCommonSubsequence(string1, string2, pos1, pos2 - 1),
        longestCommonSubsequence(string1, string2, pos1 - 1, pos2));
  }
}

/**
 * Iterate over the subsequence and return true if the character is already included
 * false otherwise
 */
bool Lcs::notIncluded(char new_letter) {
  std::string sequence = getSubSequence();
  for (int i = 0; i < sequence.size(); i++) {
    if (sequence[i] == new_letter)
      return false;
  }
  return true;
}