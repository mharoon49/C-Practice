#include <stdio.h>

int main() 
{
    float radius;
    double pi, volume;

    // Values
    pi = 3.14159;
    radius = 1.5;

    // Volume Formula
    volume = (4.0/3.0) * pi * radius * radius * radius;

    // Printing Results
    printf("The volume of a sphere with radius %.2f is %.2f cubic units \n", radius, volume);
    
    return 0;
}