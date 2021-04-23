#include<stdio.h>
int print_oddeven_sum(int s_num,int e_num);
int main()
{
    int s_num,e_num,sum;

 printf("Enter the Starting and Ending Number\n");
  scanf("%d%d",&s_num,&e_num);

sum=print_oddeven_sum(s_num,e_num);
  printf("SUM of Even/Odd Number= %d\n",sum);

return 0;
}
int print_oddeven_sum(int s_num,int e_num)
{
   if(s_num==e_num)
     return s_num;
     else
        return s_num+print_oddeven_sum(s_num+2,e_num);

}
