#include <stdio.h>
#include <math.h>

// Declaring Prototypes
void add (float a, float b);
void subtract (float a, float b);
void multiply (float a, float b);
void divide (float a, float b);
void power (float a, float b);


int main (void)
{
 float a, b;
 char op;

 printf("Enter a number, an Operation (+, -, *, /, ^), and another Number: ");
 fflush(stdout);
 if (scanf("%f %c %f", &a, &op, &b) != 3) {
   printf("Invalid input! Enter a number, an operation, and another number.\n");
   return 1;
 }

// Checking operators & calling functions
if (op == '+') {
  add (a, b);
  return 0;
}

else if (op == '-') {
  subtract (a, b);
  return 0;
}

else if (op == '*') {
  multiply (a, b);
  return 0;
}

else if (op == '/') {

  if (b == 0) {
    divide (a, b);
    return 1;
  }
  
  else {
    divide (a, b);
    return 0;
  }
}

else if (op == '^') {
  power (a, b);
  return 0;
}

else {
    printf("Invalid input!\n");
    return 1;
  }
}

// For addition
void add (float a, float b) {
  printf ("Calculated value is: %.8g\n", a + b);
}

// For subtraction 
void subtract (float a, float b) {
  printf ("Calculated value is: %.8g\n", a - b);
}

// For multiplictaion
void multiply (float a, float b) {
  printf ("Calculated value is: %.8g\n", a * b);
}

// For division
void divide (float a, float b) {
  if (b == 0) {
    printf("Cannot divide by zero\n");
  }
  else {
  printf ("Calculated value is: %.8g\n", a / b);
}
}

// for exponentiation
void power (float a, float b) {
  printf ("Calculated value is: %.8g\n", powf(a, b));
}
