#include<stdio.h>
int main()
{
    int days,years,weeks;

    printf("Enter Days: ");//Write a C program to convert days into years, weeks and days.

    scanf("%d", &days);

    years = days/365;
    weeks =(days-(years*365))/7;
    days =(days-((years*365)+(weeks*7)));

    printf("Years%d\n Weeks%d\n Days%d\n", years,weeks,days);

    return 0;

}
