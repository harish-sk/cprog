/* Article Associated with this program can be found here 
   http://www.harishnote.com/2015/12/c-programming-54-structure-pointer.html
*/
#include <stdio.h>

struct student {
   char name[20];
   int age;
   int class;
};

void print_student(struct student* ps);

int main()
{
   struct student a = {"Ram", 7, 2};
   struct student b = {"Mason", 9, 4};

   print_student(&a);
   print_student(&b);

   return 0;
}

void print_student(struct student* ps)
{
  printf("Student %s age is %d and studies in %d\n",
	 ps->name, ps->age, ps->class);
}
