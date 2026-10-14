#include<stdio.h>

// Declaring prototypes
int isPrime(int a);
void printPrime(int b);

int main(void)
{
   int num;

   // Fetching input
   printf("Enter a Number (greater than 1): ");
   fflush(stdout);
   if (scanf("%d", &num) != 1 || num <= 1) {
    printf ("Invalid input!\n");
    return 1;
   }

   // printing final results
   printf("Prime numbers result: ");
   printPrime(num);

   return 0;
}


// For printing primes
void printPrime(int b)
{
  int firstprime = 1;

  for (int i=2; i<=b; i++)
  {
    if ((isPrime(i)) == 1) {
       if (!firstprime) {
         printf(", ");
       }
       printf("%d", i);
       firstprime = 0;
    }
  }
}


// For finding primes
int isPrime(int a)
{
  for (int i=2; i<a; i++)
  {
    if ((a % i) == 0) {
      return 0;
    }
  }
  return 1;
}