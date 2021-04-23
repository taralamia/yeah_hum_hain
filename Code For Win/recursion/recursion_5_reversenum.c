#include<stdio.h>
int print_reverse(int num);
int power(int num,int n1);
int count(int num);
int main()
{
    int num;
    printf("Enter any number to find its reverse number\n");
    scanf("%d",&num);
    printf("REVERSE NUMBER=%d\n",print_reverse(num));
   return 0; 
}
int print_reverse(int num)
{
    if(num==0)
     return num;
    else
       return ((num%10)*power(10,(count(num)-1))+print_reverse(num/10));
}
int power(int num,int n1)
{
    if(n1==0)
    return 1;
    else
       return num*power(num,n1-1);
}

int count(int num)
{
   if(num==0)
   return 0;
   else 
   return 1+count(num/10);

}
