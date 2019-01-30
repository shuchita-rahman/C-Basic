#include <stdio.h>

int main()
{
   // declaring integer variable
   int x;
   //declaring character variable
   char a;
   //declaring float variable
   float y;

   //This print will give garbage value because we didn't assigned anything in the variable
   printf("\ninterger - %d\nCharater - %c \nFloat - %f", x, a, y);

   // assigning variables
   x = 5;
   printf("\n\nInteger - %d", x);

   a = 'A';
   printf("\nCharacter - %c", a);

   y = 8.9;
   printf("\nFloat - %f", y);
    return 0;
}
