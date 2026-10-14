#include<stdio.h>

// Declaration of prototype
int SumofDigits(int a);
int factorial (int b);


int main(void)
{
  int num;

  printf("Enter an Integer:  ");
  fflush(stdout);
  if (scanf("%d", &num) != 1 || num <= 0) {
    printf("Invalid input!\n");
    return 1;
  }

  // Calling function and Printing Results
  int result1 = SumofDigits(num);
  int result2 = factorial(num);

  printf("Sum of digits are: %d\n", result1);
  printf("Sum of the factorials of the digits: %d\n", result2);
  
  return 0;
}


  // To calculate Sum of the digits
 int SumofDigits(int a)
  {
    int sum = 0;

   for (int i=a; i>0; i/=10)
    {
      int lastdigit = i % 10;
      sum += lastdigit;
    }
  
    return sum;
  }


  // To find Sum of factorial of digits
  int factorial(int b)
  { 
    int sum = 0;

    for (int i=b; i>0; i/=10)
    {
      int fact=1;
      int lastdigit = i % 10;
      for (int j=1; j<=lastdigit; j++)
      {
        fact *= j;
      }
      sum += fact; 
    }

    return sum;
  }