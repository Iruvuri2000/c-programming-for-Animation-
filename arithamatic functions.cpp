#include<stdio.h>
int main()
{
    int a, b, add, subtract, multiply;
    float divide;
    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);
    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/b;
    printf("\nAddition of the numbers = %d\n", add);
    printf("Subtraction of the numbers = %d\n", subtract);
    printf("Multiplication of the numbers = %d\n", multiply);
    printf("Division of the numbers = %f\n", divide);
    return 0;
}
