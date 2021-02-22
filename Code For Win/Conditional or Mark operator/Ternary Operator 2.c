//Write a C program to input a number and check whether number is even or odd using Conditional/Ternar operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    (num%2==0) ? printf("The Number is even") : printf("The Number is odd");


    return 0;

}
