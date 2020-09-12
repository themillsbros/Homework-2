/****
* PSEUDOCODE:
* couldnt figure it out within given parameters.
*/
#include <iostream>
#include <string>

using namespace std;

string FindNthRoot(int number, int n, int precision) {
    int whole = 0;
    float decimal;
    int tempWhole=0;
    float combo;
    float holdmulti;
    float tempmulti;

    while(tempWhole < number){
      tempWhole = 1;
      //whole++;
    
      for (int i = 0; i < n; i++){
        
        tempWhole *= whole;
      }
      whole++;
   }
  
    whole--;
    tempWhole = 1;
    for (int i = 0; i < n; i++){
      tempWhole *= whole;
    }

    cout << whole << "help" << tempWhole;
    
    for (int i = 0; i < precision; i++){
      holdmulti*= .1;
      tempmulti = 0;



      while(tempWhole+tempmulti < number){
        tempmulti+= holdmulti;
        //cout << "me?";
      }
      combo += tempmulti;

    }
   
cout << combo;

    return to_string(combo);
}
