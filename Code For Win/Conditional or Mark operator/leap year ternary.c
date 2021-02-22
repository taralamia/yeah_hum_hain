//Write a C program to input a year and check whether year is leap year or not using conditional/ternary operator
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d", &year);

(year%4==0 && year%100!=0)? (printf("Leap year")) :((year%400==0) ? printf("Leap Year") : printf("Common Year"));



    return 0;

}
