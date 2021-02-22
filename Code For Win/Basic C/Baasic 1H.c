//Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects
#include<stdio.h>
int main()
{
float math,chem,phy,bio,eng,total,average,percentage;

printf("Enter The Marks for math chem phy bio eng accordingly: ");
scanf("%f%f%f%f%f", &math, &chem,&phy,&bio,&eng);

total = math+chem+phy+bio+eng;
average = (total)/5.0;
percentage = (total/500) * 100.0;

printf("Total %.2f\n Average %.2f\n Percentage %.2f\n", total, average,percentage);


return 0;


}
