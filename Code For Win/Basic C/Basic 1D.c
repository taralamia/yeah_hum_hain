//Write a C program to enter temperature in Fahrenheit and convert to Celsius(c/5=(f-32)/9)
#include<stdio.h>
int main()
{
    float far,cel;

    printf("Enter the Temperature in Farenheit: ");
    scanf("%f", &far);

     cel=(far-32)*5/9;//5/9 pore likhte hobe or ((far-32)/9) eivabe likhte hobe

    printf("\nTemperature in Celsius: %.2f",cel);
        return 0;

}
