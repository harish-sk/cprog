#include <stdio.h>

struct student {
   char name[20];
   int age;
   int class;
};

int main()
{
   struct student s[5] = {{"Ram", 7, 2},
                          {"Mason", 9, 4},
                          {"Akbar", 5, 1},
                          {"Emma", 10, 5},
                          {"David", 14, 9}};
   int i = 0;

   for(i = 0; i < 5; i++) {
      printf("%s is %d years old and studies in %d Class\n",
             s[i].name, s[i].age, s[i].class);
   }
   return 0;
}
