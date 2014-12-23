#include <stdio.h>

int main()
{
  int array[100], maximum, size, c, location = 1;

  printf("Enter the number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);
//user inputs size of list
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
//while iterating through array
//scanf assigns the decimal to each element

  maximum = array[0];
//assign first element to a var of maximum

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
      //if any element with array is greater than maximum
      //assign it to maximum and assign its location to the variable
      //by looking at what c is and adding 1 bc we're dealing w arrays
    {
       maximum  = array[c];
       location = c+1;
    }
  }

  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}
