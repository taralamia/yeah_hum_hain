//Triangle is valid or not
#include<stdio.h>
int main()
{
    int side1,side2,side3,sum1,sum2,sum3;//nested if diyeo kora jai
    printf("Enter the Three sides of a Triangle");
    scanf("%d%d%d", &side1, &side2,&side3);

    sum1=side1+side2;
    sum2=side2+side3;
    sum3=side1+side3;
    if(sum1>side3 && sum2>side1 && sum3>side2)
       {
        printf("The Triangle is valid");
       }

      else
      {
          printf("The Triangle is invalid");
      }

    return 0;

}
