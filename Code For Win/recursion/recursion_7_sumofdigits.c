#include<stdio.h>
int find_sum(int num);
int main()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d",&num);
    printf("The SUM of the digits=%d",find_sum(num));
  return 0;  
}
int find_sum(int num)
{
    if(num==0)
       return num;
    else
      return ((num%10)+find_sum(num/10));    
}