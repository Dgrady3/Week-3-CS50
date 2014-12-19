#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


//argc stands for command line arguments
//argv says 'hey look at the words after compiling the program on the same command line'
//you will store those words in an array

int main(int argc, string argv[])
{
  if (argc < 2)
  {
    printf("You Fail\n");
    return 1
  }

//^^^^^^ above is looking to see if you have an 1 argument for a total of 2
//after the program sooo ./ruby 123   is needed
//if you only have       ./ruby      it returns one and says you fail


//atoi is a method that converts strings into integers
//so atoi is literally taking the 2nd element within the
//array of strings.... the 123 in the ./ruby 123
//and making x hold that value, then printing it
  int x = atoi(argv[1])
  printf("%d\n", x);
  return 0
//^^^the return 0 is a normal way of demonstrating program success


//first for loop is looking at each word
  for (int i = 0; i < argc; i++ )
  {
    //after it finds the frist command line argument
    //it declares n as length of that word
    //and loops through each character within that word
    //cause argv is an array of string, it looks at the first
    //array, and then finds the individual characters that makeup
    //the i (whole word)
      for (int j = 0, n = strlen(argv[i]); j < n; j++)
      {
        printf("%c\n"), argv[i][j]);
      }
  }
}
