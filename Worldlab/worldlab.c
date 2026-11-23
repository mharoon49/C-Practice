#include <stdio.h>
#include <string.h>

int main()
{
  // Welcome message
  printf("\nWELCOME TO WORLDLAB!\n\n");

  // Declaration
  int choice, index;
  char word[100];

  // Prompting and fetching user's word
  printf("Enter any word: ");
  if(scanf("%99s", word) != 1) {
    printf("Invalid Input!");
    return 1;
  }

  // Length of given word
  int length = strlen(word);

  // Using while loop to display menu again and again
  while(1)
  {
  // All options
  printf("\n1. Display your word\n");
  printf("2. Calculate word length\n");
  printf("3. Display characters individually\n");
  printf("4. Display a word from chosen index\n");
  printf("0. Exit\n\n");

  // Prompting user to choose any option
  printf("Choose one option: ");
  if(scanf("%d", &choice) != 1 || choice < 0 || choice > 4) {
    printf("Invalid input!");
    return 1;
  }

  // If user chooses option 0
  if (choice == 0) {
    printf("You choose Exit, Goodbye!\n\n");
    return 0;
  }

  // If user chooses between 1-4
  switch (choice)
  {
  case 1:
    printf("Your word: %s\n", word);
    break;
  case 2:
    printf("Your word length: %d\n", length);
    break;      
  case 3:
    for(int i=0; i<length; i++) {
      printf("Character at index %d: %c\n", i, word[i]);
    }
    break;
  case 4:
    printf("Choose correct index between 0-%d: ", length - 1);
    if(scanf("%d", &index) != 1 || index > (length - 1) || index < 0) {
      printf("Invalid input!");
      return 1;
    }
    printf("\nRemaining word from given index %d: %s\n", index, &word[index]);
    break; 
  default:
    break;
  }
  printf("\n_______________________________________________\n _____________________________________________\n");
 } 
}