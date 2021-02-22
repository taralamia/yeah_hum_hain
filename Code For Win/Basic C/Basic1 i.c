//Write a C program to enter P, T, R and calculate Simple Interest ,calculate Compound Interest.
#include<stdio.h>
int main()
{
    float p,r,t,si,ci;
    printf("Enter the Principal Amount: ");
    scanf("%f", &p);
    printf("Enter the Time: ");
    scanf("%f", &t);
    printf("Enter the Rate: ");
    scanf("%f", &r);

    si= (p*t*r)/100.0;
    ci= p* (pow((1+r/100),t));

    printf("Simple Interest %.2f\n Compound Interest %.2f\n", si,ci);
    return 0;
}
