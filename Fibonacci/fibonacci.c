#include<stdio.h>

int main (void)
{
  // Variables
  int a, result;
  int val1 = 0;
  int val2 = 1;

  // prompting user and checking input
  printf("Enter the number of terms: ");
  if (scanf("%d", &a) != 1 || a <= 0) {
    printf("Invalid input!\n");
    return 1;
  }


  // Intial printing
  printf("Fibonacci series: ");

  // Checking condition if input is less then 3
  if (a < 3) {
    int add = 0;
    for (int i=0; i<a; i++) {
      add += i;
      printf("%d ", add);
    }
  }

  // For 3 or more terms, print the first two, then generate the rest
  else {
    printf("%d %d ", val1, val2);

    for (int i=3; i<=a; i++) {
      result = val1 + val2;
      printf("%d ", result);

      val1 = val2;
      val2 = result;
    }

    return 0;
  }
}