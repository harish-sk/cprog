#include <stdio.h>
typedef struct buf_tag {
  int len;
  char data[];
}buf_t;
int main()
{
   struct buf_tag a = {3, {1, 2, 3}};
   buf_t *b;

   b = malloc(sizeof(buf_t) + 3);
   b->len = 3;
   b->data[0] = 10;
   b->data[1] = 11;
   b->data[2] = 12;

   printf("a len is %d\n", a.len);
   for(int i = 0; i < a.len; i++) {
      printf("data[%d] is %d\n", i, a.data[i]);
   }

   printf("b len is %d\n", b->len);
   for(int i = 0; i < b->len; i++) {
      printf("data[%d] is %d\n", i, b->data[i]);
   }

   return 0;
}
