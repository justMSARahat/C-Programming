/*
    Calculate the area of a circle and
    modify the same program to calculate the volume of a cylinder given its radius and height.
*/
#include <stdio.h>
int main()
{
    printf("//////////Area Calculation of a Circle///////////");

    // Area of Circle using Pre-Defined Value
    int radius = 5;
    float pie = 3.1416;
    float area_circle = pie * radius * radius;
    printf("\n%f", area_circle);

    // Area of cylinder using User-Defined Value
    float height;
    printf("\n%s", "What is the Height of the cylinder: \t");
    scanf("%f", &height);

    printf("%s", "What is the Width of the cylinder: \t ");
    scanf("%d", &radius);

    float area_cylinder = pie * radius * radius * height;
    printf("\n%f", area_cylinder);
    return 0;
}