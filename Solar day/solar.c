#include <stdio.h>

int main(void) 
{
  // Declaration
  float isSunny, windSpeed, temp, SolarPanelOutput;


  // Checking whether the day is Sunny or not
  printf("Is it a Sunny day (0 or 1): ");
  fflush(stdout);
  if (scanf("%f", &isSunny) != 1 || (isSunny != 0 && isSunny != 1) ) {
    printf("Invalid input! 0 for False and 1 for True.\n");
    return 1;
  }

  // Checking wind speed
  printf("Wind speed: ");
  fflush(stdout);
  if (scanf("%f", &windSpeed) != 1 || (windSpeed < 0) ) {
    printf("Invalid wind speed!\n");
    return 1;
  }

  // Checking Temperature
  printf("Temperature: ");
  fflush(stdout);
  if (scanf("%f", &temp) != 1) {
    printf("Invalid Temperature!\n");
    return 1;
  }

  // Checking Solar panels output
  printf("Solar Panel Output: ");
  fflush(stdout);
  if (scanf("%f", &SolarPanelOutput) != 1 || SolarPanelOutput < 0 || SolarPanelOutput > 100) {
    printf("Invalid Solar Panel Input!\n");
    return 1;
  }


  // Checking all conditions
  if ( (isSunny == 1) && (windSpeed >= 0) && (windSpeed < 10) && (temp > 20) && (SolarPanelOutput >= 70) && (SolarPanelOutput <= 100) ) {
    printf("This is a good day for Solar energy.\n");
    return 0;
  }
  else {
    printf("This is a bad day for Solar energy.\n");
    return 0;
  }
}