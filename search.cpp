/****
* PSEUDOCODE:
* Linear: Use for loop to cycle through array until match found.
* Binary: while loop to cut array in half using equilvancy statements
* until match found 
*/
int LinearSearch(int numbers[], int length, int n) {
    // TODO implement this function
    for( int i = 0; i < length; i++) {
      if ( numbers[i] ==  n) {
        return i;
      }  
    }
   return -1;
}

int BinarySearch(int numbers[], int length, int n) {
    // TODO implement this function
      int first = 0;
      int last = length - 1;
      int middle;
      int position = -1;
      bool found = false;

      while (!found && first <= last){
        middle = (first + last)/2;
        if (numbers[middle] == n){
          found = true;
          position = middle;
        }
        else if (numbers[middle] > n){
          last = middle - 1;
        }
        else{
          first = middle + 1;
        }
      }
       return position;
}