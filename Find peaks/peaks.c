#include<stdio.h>

int row, col;
int value[100][100];

int peak(int r, int c) 
{
  // for loop to check every element
  for(int i=r-1; i<=r+1; i++) {
    for (int j=c-1; j<=c+1; j++) {
      // skipping it's own check
      if(i==r && j==c) {
        continue;
      }
      // Skipping out of bounds
      if(i<0 || j<0 || i>row-1 || j>col-1) {
        continue;
      }
      // Checking if the value is greater or not
      if(value[i][j] >= value[r][c]) {
        return 0;
      }
    }
  }
        return 1;
}

int main()
{
  // Fetching dimensions from user
  printf("Enter Array dimensions:\n");
  if(scanf("%d %d", &row, &col) != 2) {
    printf("Invalid Input!");
    return 1;
  }

  // Fetching Array elements from user
  printf("Enter Array Elements:\n");
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      if(scanf("%d", &value[i][j]) != 1) {
        printf("Invalid Input!");
        return 1;
      }
    }
  }

  // Calling Peak to check if the number is the largest
  int peak_value[100*100];
  int count = 0;
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      if(peak(i, j)) {
        peak_value[count] = value[i][j];
        count++;
      }
    }
  }

  // Printing final results
  printf("Total peaks found: %d\n", count);
  printf("Peak values\n");
  for(int i=0; i<count; i++) {
    printf("%d\n", peak_value[i]);
  }

}