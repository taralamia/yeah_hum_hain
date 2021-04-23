#include<stdio.h>
int print_reverse(int num);
int count(int num);
int power(int num,int n1);
int check_Palindrome(int num);
int main()
{
   int num;
   printf("Enter any Number: ");
   scanf("%d",&num);
   printf("REVERSE NUMBER=%d\n",print_reverse(num));
   check_Palindrome(num);
   return 0;
}
int print_reverse(int num)
{
    if(num==0)
    return num;
    else
       return ((num%10)*power(10,count(num)-1)+print_reverse(num/10));
}
int count(int num)
{
    if(num==0)
      return num;
      else
        return 1+count(num/10);
}
int power(int num,int n1)
{
    if(n1==0)
       return 1;
     else
       return num*power(num,n1-1);
}
int check_Palindrome(int num)
{
   if(print_reverse(num)==num)
     printf("Entered Number is PALINDROME\n");
     else
       printf("Entered Number is NOT PALINDROME");
}