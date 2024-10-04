/*
    In this file we will learn about
        - Variables,
        - What are the sizes of variable
        - How to Declear & Call Variable
        - How to Comment
*/
#include <stdio.h>
int main()
{
    // Variables
    int a = 1;
    float b = 1.14;
    char c = 'C';

    printf("%d\n", a); // %d Means Integer
    printf("%f\n", b); // %f Means Float
    printf("%c\n", c); // %c Means Char

    // Checking Size of each Variable using "Sizeof" Function
    printf("Size of int: %lu bytes \n", sizeof(a));
    printf("Size of float: %lu bytes \n", sizeof(b));
    printf("Size of Char: %lu bytes \n", sizeof(c));
}