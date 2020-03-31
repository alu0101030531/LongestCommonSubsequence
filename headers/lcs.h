/** 
 * University of La Laguna
 * ESIT
 * Grade in Computer Science
 * Subject: Diseño y análisis de algoritmos
 * Year: 3º
 * Project 7 - Longest common subsequence (lcs)
 * Author Christian J. Pérez Hernández alu0101030531@ull.edu.es
 * Date: 2020-03-27
 * File definition of the class lcs 
 * References:   Heading of the Task:
 *            https://campusvirtual.ull.es/1920/mod/assign/view.php?id=222013
 *
 * Version 1.0.0 
*/

#include <string>
#include <algorithm>

/**
 * Class Lcs receive two string and calculate the longest
 *  common sequence returning the string and the size
 */
class Lcs {
 public:
  Lcs(std::string string1, std::string string2);
  int longestCommonSubsequence();
  std::string getSubSequence() { return longest_subsequence_; };
 private:
  int longestCommonSubsequence(std::string string1, std::string string2, int pos1, int pos2);
  bool notIncluded(char new_letter);
 private:
  std::string longest_subsequence_;     // storage of the subsequence
  std::string string1_;                 // first string to analize
  std::string string2_;                 // second string to analize
};