#include <stdio.h>

// To check if a number is Prime or not
int isPrime (int num)
{
  if(num <= 1)
  {
    return 0;
  }

  for (int i = 2; i*i <= num; i++)
  {
    if(num % i == 0)
    {
        return 0;
    }
  }

  return 1;
}

// Calculates the Sum of Primes
long long SumOfPrimes (int start, int end)
{
  long long sum = 0;

  for (int i = start; i <= end; i++)
  {
    if(isPrime(i))
    {
      sum += i;
    }
  }

  return sum;
}

// Fetching input from user and printing results
int main(void)
{
  int start, end;

  printf("Enter starting number: ");
  fflush(stdout);
  if (scanf("%i", &start) != 1)
  {
    printf("Invalid input!");
    return 1;
  }

  printf("Enter ending number:   ");
  fflush(stdout);
  if (scanf("%i", &end) != 1)
  {
    printf("Invalid input!\n");
    return 1;
  }

  if (start < 0)
  {
    printf("Starting number must be positive!\n");
    return 1;
  }

  if (end < 0)
  {
    printf("Ending number must be positive!\n");
    return 1;
  }

  if (start >= end)
  {
    printf("Ending number must be greater than starting number!\n");
    return 1;
  }

  long long result = SumOfPrimes(start, end);
  printf("Sum of Primes between %i and %i: %lld\n", start, end, result);

  return 0;
}