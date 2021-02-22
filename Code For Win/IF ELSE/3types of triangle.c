#include<stdio.h>
int main()
{
    int side1,side2,side3;

    printf("Enter the Three sides of a Triangle");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3 && side3==side1)
    {
        printf("This is an Equilateral Triangle");
    }
    else if(side1==side2 || side2==side3|| side3==side1)
    {
        printf("This is an isosceles Triangle");
    }
    else if(side1!=side2 && side2!=side3 && side3!=side1)
    {
        printf("This is a scalene");
    }


    return 0;

}
