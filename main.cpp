#include <iostream>
#include "search.h"
#include "dictionary.h"

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 3;

  std::string words[] = {"dog", "cat", "pi", "square"};
  
  std::cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  std::endl;

  std::cout << "Binar Search: " << BinarySearch(list,array_length,number) <<  std::endl;

  std::cout << "MinWordLength " << MinWordLength(words, 4) << std::endl;
  std::cout << "MaxWordLength " << MaxWordLength(words,4)  << std::endl;
  std::cout << "Range " << WordLengthRange(words, 4) << std::endl;
  std::cout << "Avg " << AverageWordLength(words, 4) << std::endl;
  std::cout << "common" << MostCommonWordLength(words, 4);

  return 0;
}