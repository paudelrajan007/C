#include <stdio.h>

int main() {
   // An array storing different ages
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
  
  // Create a 'lowest age' variable and assign the first array element of ages to it
  int lowestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest age
  for (i = 0; i < length; i++) {
  
    // Check if the current age is smaller than current the 'lowest age'
    if (lowestAge > ages[i]) {
    
      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = ages[i];
    }
  }
 
  // Output the value of the lowest age
  printf("The lowest age in the array is: %d", lowestAge);
   
  return 0;
}