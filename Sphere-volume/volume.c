#include <stdio.h>

int main() 
{
    double radius;
    const double pi = 3.14159;
    double volume;

    // Checking input
    printf("Enter radius: ");
    fflush(stdout);
    if (scanf("%lf", &radius) != 1)
    {
        printf("Enter a valid radius!\n");
        return 1;
    }

    if (radius < 0)
    {
        printf("Enter a valid radius!\n");
        return 2;
    }

    // Volume Formula
    volume = (4.0/3.0) * pi * radius * radius * radius;

    // Printing Results
    printf("The volume of a sphere with radius %.2f is %.2f cubic units.\n", radius, volume);
    
    return 0;
}