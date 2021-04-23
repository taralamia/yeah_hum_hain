#include<stdio.h>
int show_sum(int s_num,int e_num);
int main()
{
    int s_num,e_num,sum;
printf("Enter the Starting and Ending Number\n");
scanf("%d%d",&s_num,&e_num);

   sum=show_sum(s_num,e_num);

printf("SUM = %d\n",sum);
    return 0;
}
int show_sum(int s_num,int e_num)
{
    if(s_num==e_num)
    return e_num;
  else
     return e_num+ show_sum(s_num,e_num-1);

}
