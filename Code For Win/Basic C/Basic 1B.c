//Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle.
#include<stdio.h>
int main()
{
    float l,w,p;

    printf("Enter Length of the Rectangle:\n ");
    scanf("%f", &l);
    printf("Enter width of the Rectangle:\n ");
    scanf("%f", &w);

    //p = 2 * (l+w);

    printf("The Perimeter of the Rectangle: %.2f ", 2 * (l+w));

    return 0;

}










