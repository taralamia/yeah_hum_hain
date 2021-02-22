//Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
int main()
{
    float rad,dia,cir,area;
    float pie = 3.14;

    printf("Enter Radius to find diameter,circumference,area of the circle: ");
    scanf("%f", &rad);

    //dia = 2 * rad;
    //cir = 2 * pie * rad;
     //area = pie * rad * rad;

    printf("\n Diameter of the Circle is %.2f", dia= 2*rad);//Eivabe likhle execution time kom hoi
    printf("\n Circumference of the Circle is %.2f", cir=2* pie *rad);
    printf("\n Area of the Circle is %.2f", area= pie*rad*rad);

   return 0;

}

