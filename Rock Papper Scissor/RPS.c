#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  srand(time(NULL));
  int n = rand() % 100;

  char user, comp;
  printf("Enter r for Rock, p for Papper and s for Scissor: ");
  if (scanf(" %c", &user) != 1) {
    printf("Invalid input!\n");
    return 1;
  }

  if (n <= 33) {
     comp = 'r';
  }
  else if (n > 33 && n <= 66) {
    comp = 'p';
  }
  else if (n > 66 && n <= 99) {
    comp = 's';
  }

  printf("Computer chooses: %c\n", comp);

if (user == 'r' ) {
  if (comp == 'p') {
    printf("Computer wins.");
  }
  else if (comp == 's'){
    printf("User wins");
  }
  else {
    printf("draw");
  }
}
if (user == 'p' ) {
  if (comp == 's') {
    printf("Computer wins.");
  }
  else if (comp == 'r'){
  printf("User wins.");
  }
  else {
    printf("draw");
  }
}
if (user == 's') {
  if (comp == 'r') {
    printf("Computer wins.");
  }
  else if (comp == 'p') {
    printf("User wins");
  }
  else {
    printf("Draw");
  }
}

}