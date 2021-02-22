#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number to check if it's divisible by 5 and 11");
    scanf("%d", &num);


    if(!(num%5) && !(num%11))

        printf("%d is Divisble", num);

    else

        printf("%d is not Divisble", num);

    return 0;
}
