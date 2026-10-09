#include <stdio.h>

int main(void)
{
  float gpa, hours;
  int discipline;

  // Prompts user for GPA input
  printf("GPA: ");
  fflush(stdout);
  if (scanf("%f", &gpa) != 1 || gpa > 4 || gpa < 0) {
    printf("Invalid input!\n");
    return 1;
  }

  // Prompts user for their credit hours
  printf("Total credit hours: ");
  fflush(stdout);
  if (scanf("%f", &hours) != 1 || hours < 0) {
    printf("Invalid input!\n");
    return 1;
  }

  // Prompts user for their discpline record
  printf("Number of violations recorded: ");
  fflush(stdout);
  if (scanf("%i", &discipline) != 1 || discipline < 0) {
    printf("Invalid input!\n");
    return 1;
  }

  // Checking conditions and printing results
  if ( gpa >= 3.5 && hours >= 60 && discipline == 0) {
    printf("You are eligible for Scholarship.\n");
  }
  else {
    printf("You are not eligible for Scholarship.\n");
  }

  return 0;
}