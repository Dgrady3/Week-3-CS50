#include <stdio.h>

int main()
{
   int array[100], n, c, d, position, swap;
//initializing variables

   printf("Enter number of elements\n");
   scanf("%d", &n);

   printf("Enter %d integers\n", n);

//scan each list of numbers
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);

//scan the unsorted list
//each time though the scan, scan one less number
//because a number should be move to the sorted pile
//thus giving us an n-1
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
//position is equivalent to the element's position

//d = element list plus 1 to represent array position
//while d is less than the length of the array, keep iterating though
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
//if the position is more than value of d, make d the posiiton

      }
      if ( position != c )
      {
//if the position isn't equal, do some magic...  ;)
//make that int = swap
//make the position an array c variable for the time being
//and replace the position value with the swaped value
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }

   printf("Sorted list in ascending order:\n");

   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);

   return 0;
}
