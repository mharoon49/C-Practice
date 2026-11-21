#include <stdio.h>

int Sum(int *arr, int size)
{
  // Calculating sum of array elements
  int sum = 0;
  for(int i=0; i<size; i++)
  {
    sum += *arr;
    arr++;
  }
  // Returning final sum to the "main" function
    return sum;
}

int main()
{
  // Declaring and fetching array size
  int size;
  printf("Enter size of an Array: ");
  if(scanf("%d", &size) != 1) {
    printf("Invalid input!");
    return 1;
  }

  // Declaring and fetching array elements
  int arr[size];
  printf("Array elements for their sum:\n");
  for (int i=0; i<size; i++) {
  if(scanf("%d", &arr[i]) != 1) {
    printf("Invalid array element!");
    return 1;
   }
  }
  
  // Calling Sum function and storing it in "result"
  int result = Sum(arr, size);

  // Printing final Sum
  printf("Total Sum = %d", result);

  return 0;
}