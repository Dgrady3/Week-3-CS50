#include <stdio.h>

int main()
{
//user enters 2 variables
   int x, y, temp;

   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
//gives data before switching nums
   printf("Before Swapping\nx = %d\ny = %d\n",x,y);

//3 variables are used as a shuffling process
//x is a temp
//y moves to the x location
//temp is pushed to the y location
//therefore creating an easy trade of values or "hand-offs"
   temp = x;
   x    = y;
   y    = temp;

   printf("After Swapping\nx = %d\ny = %d\n",x,y);

   return 0;
}

//next up, completing the swap w only two variables
