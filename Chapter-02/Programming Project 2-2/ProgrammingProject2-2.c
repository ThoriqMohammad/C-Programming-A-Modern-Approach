/*
* Write a program that computes the volume of a sphere with a 10-meter radius, 
* using the formula v = 4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. 
* What happens?) Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply r by itself
* twice to compute r^3.
*/

/* Answer */

#include <stdio.h>
int main()
{
  int r = 10;
  float ratio = (4.0/3.0);
  float pi = 3.14;
  float volume = ratio * pi * r * r * r;
  printf("The volume is: %f", volume);
  return 0;
} 
