#include<stdio.h>
int main()
{
    printf("Lets take some inputs");

    int a; // Declearing Integer Variable
    scanf("%d", &a); // &a means we are entering given value to a
    printf("The Value of Variable a is %d", a);

    float b;
    scanf("%f", &b);
    printf("The Value of Variable b is %d", b);

    char cha;
    scanf("%c", &cha);
    printf("The Value of Variable b is %c", cha);

    return 0;
}