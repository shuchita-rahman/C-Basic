#include <stdio.h>
#include <string.h>

int main()
{
   int x;

   printf("Enter a number : ");
   scanf("%d", &x);

   if(x > 10)
   {
       printf("\nThe number is greater than 10");
   }
   else if(x== 10)
   {
       printf("\nThe number is 10");
   }
   else if(x <= 9)
   {
       printf("Number is less than equal or 9");
   }
   else
   {
       printf("\n  Inside 'else'");
   }



    return 0;
}
