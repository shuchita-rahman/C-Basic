#include <stdio.h>

int main()
{
   // declaring integer variable
   int x = 9, y = 1;

   // Doing mathematical operation using variables
   printf("\nSum =      %d", x + y);
   printf("\nSub =      %d", x- y);
   printf("\nMultiply = %d", x * y);
   printf("\nDivision = %d", x / y);


   //Doing mathematical operation without using variables
   printf("\n\n ---------------------------------------------");
   printf("\nSum =      %d", 5 + 6);
   printf("\nSub =      %d", 6 - 8);
   printf("\nMultiply = %f", 6 * 9.9);
   printf("\nDivision = %f", 9 / 100);

    return 0;
}
