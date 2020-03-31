/** 
 * University of La Laguna
 * ESIT
 * Grade in Computer Science
 * Subject: Diseño y análisis de algoritmos
 * Year: 3º
 * Project 7 - Longest common subsequence (lcs)
 * Author Christian J. Pérez Hernández alu0101030531@ull.edu.es
 * Date: 2020-03-27
 * File we create two strings randomly and then we calculate 
 *      the longest common subsequence
 * References:   Heading of the Task:
 *            https://campusvirtual.ull.es/1920/mod/assign/view.php?id=222013
 *
 * Version 1.0.0 
*/

#include "lcs.h"

#include <iostream>

 const int NUMBER_OF_LETTERS = 26;    // Number of letters
 const int SEED = 87986;              // Seed to generate different numbers

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Introduzca la longitud de las cadenas 1 y 2\n";
  } else {
    std::string string1;
    std::string string2;
    for (int i = 0; i < std::stoi(argv[1]); i++) {
      string1.push_back('a' + rand() % NUMBER_OF_LETTERS);
    }
    srand(SEED);
    for (int i = 0; i < std::stoi(argv[2]); i++) {
      string2.push_back('a' + rand() % NUMBER_OF_LETTERS);
    }
    std::cout << "string1: " << string1 << "\n";
    std::cout << "string2: " << string2 << "\n";    
    Lcs lcs(string1, string2);
    std::cout << lcs.longestCommonSubsequence() <<  " " << lcs.getSubSequence() << "\n";
  }
}