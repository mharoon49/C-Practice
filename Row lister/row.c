#include <stdio.h>

int main(void)
{
  // Getting input
  int rows;
  int seats;

  printf("Number of rows: ");
  fflush(stdout);
  if (scanf("%i", &rows) != 1 || rows <= 0)
  {
    printf("Invalid input!\n");
    return 1;
  }

  printf("Number of seats: ");
  fflush(stdout);
  if (scanf("%i", &seats) != 1 || seats <= 0)
  {
    printf("Invalid input!\n");
    return 2;
  }

  
  // printing by using loops
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= seats; j++)
    {
      printf("%i %i\n", i, j);
    }
  }
   
   return 0;
}