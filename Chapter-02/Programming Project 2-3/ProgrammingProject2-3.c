/* Problem : 
*Modify the program of Programming Project 2 so that it prompts the user to enter the radius
of the sphere.
*/

/* Solution */

#include <stdio.h>
int main()
{
  int r;
  float ratio = (4.0/3.0);
  float pi = 3.14;
  printf("Please insert the radius of the sphere: ");
  scanf("%d", &r);
  float volume = ratio * pi * r * r * r;
  printf("The volume is: %f", volume);
  return 0;
} 
