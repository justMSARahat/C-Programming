/*
    Write a C program to calculate area of a rectangle:
        a. Using hard coded inputs.
        b. Using inputs supplied by the user
*/
#include <stdio.h>
int main()
{
    printf("//////////Area Calculation of a Rectangle///////////");

    // Area of Rectangle using Pre-Defined Value
    int height1 = 5;
    int width1 = 10;
    int area1 = height1 * width1;
    printf("\n%d", area1);

    // Area of Rectangle using User-Defined Value
    int height2;
    int width2;
    printf("\n%s", "What is the Height of the Rectangle: \t");
    scanf("%d", &height2);

    printf("%s", "What is the Width of the Rectangle: \t ");
    scanf("%d", &width2);

    int area2 = height2 * width2;
    printf("\n%d", area2);
    return 0;
}