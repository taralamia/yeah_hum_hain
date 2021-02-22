#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,discriminant;
    float imaginary;
    printf("Enter the values of a,b,c for a quadratic equation ax^2+bx+c=0 ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b*b) - (4*a*c);

    if(discriminant>0)
    {
        root1=(-b + sqrt(discriminant))/(2*a);
        root2= (-b - sqrt(discriminant))/(2*a);
        printf("Two Distinct and Real value exist %.2f and %.2f", root1,root2);
    }
    else if(discriminant==0)
    {
        root1=root2=(-b/(2*a));
        printf("Two Real and Equal value exist %.2f and %.2f", root1,root2);
    }
    else if(discriminant<0)
    {
        root1=root2= (-b/(2*a));
        imaginary = (sqrt (-discriminant))/(2*a);
        printf("Two Distinct and Complex value exist %.2f+i and %.2f-i",root1,imaginary,root2,imaginary);
    }

    return 0;
}
