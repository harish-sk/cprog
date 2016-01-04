/* Article Associated with this program can be found here 
   http://www.harishnote.com/2016/01/c-programming-57-structure-partial.html
*/
#include <stdio.h>

typedef struct student {
   char name[20];
   int age;
   int class;
}student_t;

void print_student(student_t* ps);

int main()
{
   student_t a = {.name = "Ram", .class = 2, .age = 7};
   student_t b = {"Mason", 9, 4};

   print_student(&a);
   print_student(&b);

   return 0;
}

void print_student(student_t* ps)
{
  printf("Student %s age is %d and studies in %d\n",
	 ps->name, ps->age, ps->class);
}
