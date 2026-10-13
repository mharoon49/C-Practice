#include<stdio.h>

int main(void)
{
  float total, obtained, result;
  char grade;
  
  printf("Enter Total Marks:    ");
  fflush(stdout);
  if (scanf("%f", &total) != 1 || total <= 0) {
    printf("Invalid input!\n");
    return 1;
  }

  printf ("Enter Obtained Marks: ");
  fflush(stdout);
  if (scanf("%f", &obtained) != 1 || (obtained > total || obtained < 0) ) {
    printf("Invalid input!\n");
    return 1;
  }


  // Formula to calculate percentage
  result = (obtained * 100) / total;


  // For checking grades
  if (result >= 90) {
    grade = 'A';
  }
  else if (result >= 80 && result < 90) {
    grade = 'B';
  }
  else if (result >= 70 && result < 80) {
    grade = 'C';
  }
  else if (result >= 60 && result < 70) {
    grade = 'D';
  }
  else {
    grade = 'F';
  }
  

  // Printing final results
  printf("Your Percentage is %.5g and your Grade is %c.\n", result, grade);
  return 0;
}