//Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter Three numbers: ");
    scanf("%d%d%d", &num1,&num2,&num3);

    if(num1>num2)
       {
         if (num1>num3)
        {
            printf("Num1 is max\n");
        }
    else
     {
        printf("Num3 is  max\n");
     }

    }

    else
    {
         if(num2>num3)
        {
            printf("Num2 is  max\n");
        }

    else
      {
        printf("Num3 is  max");
      }

    }
    return 0;

}
