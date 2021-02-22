#include<stdio.h> //C program to find area of an equilateral triangle
int main()
{
    float a,area;

    printf("Enter a side of an equilateral Triangle: ");
    scanf("%f", &a);

    area = (sqrt(3)/4) * (a * a);

    printf("The area of Equilateral Triange is %.2f", area);

   return 0;

}
