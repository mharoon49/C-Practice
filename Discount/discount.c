#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int age;
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
  printf("Is person eligible for discount? %d\n", isEligible);

  return 0;
}