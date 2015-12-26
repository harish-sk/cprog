#include <stdio.h>
int main()
{
  char c = 'a';
  int  i = 32;
  float f = 2.3;

  printf("Size of Character is %d\n", sizeof(c));
  printf("Size of Integer   is %d\n", sizeof(i));
  printf("Size of Float     is %d\n", sizeof(f));
}
