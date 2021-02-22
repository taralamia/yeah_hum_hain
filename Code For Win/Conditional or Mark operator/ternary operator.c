//Write a C program to input two numbers and find maximum between two numbers using conditional/ternary operator ?:
#include<stdio.h>
int main()
{
    int num1,num2,max;
    printf("Enter two number: ");
    scanf("%d%d",&num1, &num2);

    max =   (num1>num2)? (num1) : (num2);

    printf("The Max value is %d", max);

    return 0;

}
