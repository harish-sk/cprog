#include <stdio.h>
int main()
{
  char c = 'a';
  int  i = 32;
  float f = 2.3;

  printf("Address of Character is %p\n", &c);
  printf("Address of Integer   is %p\n", &i);
  printf("Address of Float     is %p\n", &f);
}
