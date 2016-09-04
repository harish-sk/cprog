#include <stdio.h>

typedef struct name_tag{
   char *first;
   char *second;
}name_t;

int main()
{
   name_t list[4] = {{"James", "Smith"},
                     {"Michael","Smith"},
                     {"Maria", "Garcia"},
		     {"Maria", "Rodriguez"}};
   int i;

   for(i = 0; i < 4; i++) {
      printf("%-15s %-15s\n", list[i].first, list[i].second);
   }

   return 0;
}
