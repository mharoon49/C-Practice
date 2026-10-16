#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  srand(time(NULL));
  int secretNum = rand() % 100 + 1;

  int guess;

  printf("Welcome! I am thinking of a number between 1 and 100. Can you guess it?\n");
 printf("Sec num: %d\n", secretNum);
  int tries = 0;
  do
  {
    printf("Your guess: ");

    if ((scanf("%d", &guess)) != 1 || guess <= 0 || guess > 100) {
      printf("Invalid input!");
      return 1;
    }
    
    tries++;

    if ((secretNum - guess != 0) && (secretNum - guess >= -5) && (secretNum - guess <= 5)) {
      printf("Wrong guess! But you are close.\n");
    }
    else if(secretNum - guess != 0 && guess > secretNum) {
      printf("Wrong guess! Your guess is higher.\n");
    }
    else if (secretNum - guess != 0  && guess < secretNum) {
      printf("Wrong guess! Your guess is smaller.\n");
    }

  } 

  while (guess != secretNum);
    printf("Congrats! You did it in %d tries.\n", tries);  
  
  return 0;
}