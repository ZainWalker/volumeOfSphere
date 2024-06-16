//This program outputs the volume of a sphere when given the radius

#include <stdio.h>

#define VOLUME 4.0f/3.0f*3.14159265359f

int main()
{
    float radius, total, radiusCubed;
    printf("This is a Program to print the volume of a sphere when given the radius!\n");
    printf("Input your radius: ");
    scanf("%f", &radius);
    radiusCubed = (radius * radius * radius);
    total = (VOLUME * radiusCubed);
    printf("The volume of the sphere is %.2f", total);
    return 0;
}