#include<stdio.h>
int print_naturalnum(int num);
int main()
{
  int s_num,e_num;
  printf("Enter the Starting and Ending number\n");
  scanf("%d%d",&s_num,&e_num);
  printf("All natural numbers from the entered range\n");

print_naturalnum(e_num);   
 
}
int print_naturalnum(int num)
{
    if(num>0)
     print_naturalnum(num-1);
    else 
    return num;
    printf("%d\t",num);
}