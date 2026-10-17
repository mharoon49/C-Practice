#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  srand(time(NULL));

  // Seed the random number generator and choose a number between 1 and 100.
  int secretNum = rand() % 100 + 1;

  // Declare variables and display the welcome message.
  int guess;
  int tries = 0;
  printf("Welcome! I am thinking of a number between 1 and 100. Can you guess it?\n");


  do
  {
    // Read the user's guess and reject invalid input.
    printf("Your guess: ");
    if ((scanf("%d", &guess)) != 1 || guess <= 0 || guess > 100) {
      printf("Invalid input!");
      return 1;
    }

    // Track how many valid guesses the player has made.
    tries++;
    

    // Show a hint depending on how close the guess is to the secret number.
    if (guess != secretNum && abs(secretNum - guess) <= 5) {
      printf("Wrong guess! But you are close.\n");
    }
    else if (guess != secretNum && guess > secretNum) {
      printf("Wrong guess! Your guess is higher.\n");
    }
    else if (guess != secretNum && guess < secretNum) {
      printf("Wrong guess! Your guess is smaller.\n");
    }
  } 

  // Display the success message and the number of attempts used.
  while (guess != secretNum);
    printf("Congratulations! You did it in %d tries.\n", tries);  
  
  return 0;
}