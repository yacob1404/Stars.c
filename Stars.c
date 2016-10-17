#include <stdio.h>

int main ()
{
 int stars;

//Get user input
 printf("Please enter a star count, (negatives close the program): ");
 scanf("%i", &stars);

//Begin looping
 while (stars >= 0)
 {
  while (stars > 0)
 {
  printf("* ");
  stars = stars - 1;
 }
 printf("\n");
 printf("Please enter a star count, (negatives close the program): ");
 scanf("%i", &stars);
 }
 return 0;
}
