#include <stdio.h>
#include "fact.h"
int main()
{
   int fact, n = 4;

   fact = factorial(n);

   printf("Factorial of n is %d\n", fact);

   return 0;
}
