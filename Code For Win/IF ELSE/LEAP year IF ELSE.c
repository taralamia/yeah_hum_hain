#include<stdio.h>
int main()
{

    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
if((year%4==0) && (year%100!=0) || (year%4==0))
        printf("Leap Year");
    else
        printf("Common year");
    return 0;
}
