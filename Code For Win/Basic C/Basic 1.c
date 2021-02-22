#include<stdio.h>
int main()
{

   char ch;
   unsigned char uch;

   int i;
   unsigned int uint;

   long l;
   unsigned long ul;

   long long ll;
   long long unsigned ull;

   float f;
   double d;
   long double ld;


   printf("Enter a Character: ");
   scanf("%c", &ch);
   getchar();

   printf("Enter an unsigned Character: ");
   scanf("%c", &uch);

   printf("Enter a value for Integer Data Type: ");
   scanf("%d", &i);

   printf("Enter a value for Unsigned Integer Data Type: ");
   scanf("%lu", &uint);

   printf("Enter a value for Long Data Type: ");
   scanf("%ld", &l);//signed

   printf("Enter a value for Unsigned Long Data Type: ");
   scanf("%lu", &ul);

   printf("Enter a value for Long Long Data Type: ");
   scanf("%lld", &ll);//signed

   printf("Enter a value for Unsigned Long Long Data Type: ");
   scanf("%llu", &ull);

   printf("Enter a Value for Float Data type: ");
   scanf("%f", &f);

   printf("Enter a Value for Double Data type: ");
   scanf("%lf", &d);

   printf("Enter a Value for Long Double Data type: ");
   scanf("%Ld", &ld);

   return 0;

}
