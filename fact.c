#include "fact.h"
int factorial(int x)
{
   int temp_fact;
   if(x == 1) {
      temp_fact = 1;
   } else {
      temp_fact = x * factorial(x - 1);
   }
   return temp_fact;
}
