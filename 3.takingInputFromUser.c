#include <stdio.h>

int main()
{
   // declaring integer variable
   int x;

   //taking integer number input from user
   printf("Enter a number : ");
   scanf("%d", &x);

   char a;
   printf("\nEnter a Character : ");
   scanf("%c", &a);

   float y;
   printf("\nEnter a floating number : ");
   scanf("%f", &y);

   printf("\n\n------------------------");

   printf("\nThe inputs are : %d   %c   %f", x, a, y);

    return 0;
}
