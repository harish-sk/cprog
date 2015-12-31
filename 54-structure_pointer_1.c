#include <stdio.h>

struct student {
   char name[20];
   int age;
   int class;
};

int main()
{
   struct student a = {"Ram", 7, 2};
   struct student b = {"Mason", 9, 4};
   struct student *pa = &a, *pb;

   pb = &b;

   printf("Student %s age is %d and studies in %d\n",
          pa->name, pa->age, pa->class);
   printf("Student %s age is %d and studies in %d\n",
          pb->name, pb->age, pb->class);

   if(pa->age > pb->age) {
      printf("%s is older\n", a.name);
   }else if(a.age < b.age) {
      printf("%s is older\n", b.name);
   }else {
      printf("%s and %s are both of same age\n",
             a.name, b.name);
   }
   return 0;
}
