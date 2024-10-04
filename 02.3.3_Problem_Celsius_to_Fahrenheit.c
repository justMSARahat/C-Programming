/*
    Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
*/
#include <stdio.h>
int main()
{
    printf("//////////Centigrade degrees temperature to Fahrenheit///////////");

    // Calculation
    float centigrade;
    printf("\n%s", "What is the Temperature in Centigrade: \t");
    scanf("%f", &centigrade);

    float calculation = ((9.0 / 5.0) * centigrade) + 32;
    printf("\n%f", calculation);
    return 0;
}