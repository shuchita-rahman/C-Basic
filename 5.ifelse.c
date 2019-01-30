#include <stdio.h>
#include <string.h>

int main()
{
   int x;

   printf("Enter a number : ");
   scanf("%d", &x);

   if(x < 10)
   {
       printf("\n  Inside 'if'");
   }
   else
   {
       printf("\n  Inside 'else'");
   }



    return 0;
}
