#include <stdio.h>
int main()
{
   char buf[5];
   int i;
   ungetc('\n', stdin);
   ungetc('\0', stdin);
   for(i = 0; i < 100; i++) {
      ungetc('a', stdin);
   }
   gets(buf);
   return 0;
}
