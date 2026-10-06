#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int age;

  printf("Person age: ");
  fflush(stdout);
  if (scanf("%d", &age) != 1)
  {
    printf("Please enter valid age!\n");
    return 1;
  }
  else if (age <= 0)
  {
    printf("Please enter valid age!\n");
    return 2;
  }
  

  bool isEligible = (age >= 65);

  // Printing results
  if(isEligible == 1)
  {
    printf("Person is eligible for discout.\n");
  }
  else
  {
    printf("Person is not eligible for discout.\n");
  }

  return 0;
}