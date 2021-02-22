#include<stdio.h>
int main()
{
  int num;
  printf("Enter any Number to check if it's odd or even");
  scanf("%d",&num);

  if(!(num%2))
    printf("%d is even",num);
  else
    printf("%d is odd",num);
  return 0;



}
