/****
* PSEUDOCODE:
*minWord: set first word as smallest, compare with array until smaller is found, if found desinate new smallest
*maxWord: same as min but for largest
*Range: subtract min from max
* Average: get sum divide by length
*mode: Count up iterations of each length and tracks the largest length using a nested for loop.
*/
#include <string>
using namespace std;

int MinWordLength(string words[], int length) {
    // TODO implement this function
    int smallest = 0;
    for (int i = 0; i < length; i++){
      if (words[smallest].length() > words[i].length()){
        smallest = i;
      } 
    }
    return words[smallest].length();
}

int MaxWordLength(string words[], int length) {
   int largest = 0;
    for (int i = 0; i < length; i++){
      if (words[largest].length() < words[i].length()){
        largest = i;
      } 
    }
    return words[largest].length();
}

int WordLengthRange(string words[], int length) {
    int largest;
    int smallest;
    
    largest = MaxWordLength(words, length);
    smallest = MinWordLength(words, length);

    return largest - smallest;
}

int AverageWordLength(string words[], int length) {
  int sum = 0;

  for (int i = 0; i < length; i++){
    sum += words[i].length();
  }
  return sum/length;
}

int MostCommonWordLength(string words[], int length) {
    int counter = 0;
    int maxcountindex = -1;
    int maxcount = 0;
    
    for ( int i = 0; i < length; i++){
      counter = 0;
      for ( int j = 0; j < length; j++){
        if (words[i].length() == words[j].length()){
          counter++;
        }
    }
    if (counter > maxcount){
      maxcount = counter;
      maxcountindex = i;
    }
    }

    return words[maxcountindex].length();
}
