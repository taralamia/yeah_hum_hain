#include<stdio.h>
long long print_factorial(long long num);
int main()
{
    long long num;
    printf("Enter the number\n");
    scanf("%lld",&num);
    printf("FACTORIAL=%lld",print_factorial(num));
    return 0;
}
long long  print_factorial(long long num)
{
    if(num==1)
      return 1;
    else
      return num*print_factorial(num-1);   
}