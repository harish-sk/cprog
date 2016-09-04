#include <stdio.h>
#define SWAP(type) \
  void swap_##type (type *x, type *y) \
  { \
    type temp; temp = *x; *x = *y; *y = temp;\
  }
SWAP(char);
SWAP(int);
SWAP(float);
int main()
{
   char c = 'H', d = 'W'; 
   int a = 10, b = 20;
   float f = 1.1, g = 1.2;
   
   printf("c and d before swap is %c and %c\n", c, d);
   swap_char(&c, &d);
   printf("c and d after swap is %c and %c\n", c, d);

   printf("a and b before swap is %d and %d\n", a, b);
   swap_int(&a, &b);
   printf("a and b after swap is %d and %d\n", a, b);

   printf("f and g before swap is %f and %f\n", f, g);
   swap_float(&f, &g);
   printf("f and g after swap is %f and %f\n", f, g);

   return 0;
}
