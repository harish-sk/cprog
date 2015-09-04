#include <stdio.h>

struct student {
   char name[20];
   int age;
   int class;
};

int main()
{
   struct student a = {"Ram", 7, 2};

   printf("Sizeof structure student is %d\n", sizeof(struct student));

   
   printf("Address of a is %p\n",&a);
   printf("Address of a.name is %p\n", &a.name);
   printf("Address of a.age is %p\n", &a.age);
   printf("Address of a.class is %p\n", &a.class);
   
   return 0;
}
