/* Read the full article here
   http://www.harishnote.com/2016/01/c-programming-59-endianness.html
*/
#include <stdio.h>

int main()
{
  int var = 0x1B61F2E6;
  char *p;
  
  printf("value of var is %d (Hex %x), stored at %p\n",
	 var, var, &var);

  /* Lets store the &var in char pointer to analyze byte by byte value*/
  p = &var;

  printf("Value at %p is %x\n", p, *p);
  printf("Value at %p is %x\n", p+1, *(p+1));
  printf("Value at %p is %x\n", p+2, *(p+2));
  printf("Value at %p is %x\n", p+3, *(p+3));

  return 0;
}
