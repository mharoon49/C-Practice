#include <stdio.h>

int main(void)
{
  // Declaring Variables
  int smallNumber;
  float mediumNumber;
  double largeNumber;

  // Checking for valid input
  printf("Enter an integer: ");
  fflush(stdout);
  if(scanf("%d", &smallNumber) != 1)
  {
    printf("Invalid input!\n");
    return 1;
  }

  printf("Enter a decimal number(float): ");
  fflush(stdout);
  if (scanf("%f", &mediumNumber) != 1)
  {
    printf("Invalid input!\n");
    return 2;
  }

   // Small to large
   largeNumber = smallNumber;
   printf("Integer to double: %.1f\n", largeNumber);

   // Medium to Large
   largeNumber = mediumNumber;
   printf("float to double: %.1f\n", largeNumber);
  
   return 0;
}