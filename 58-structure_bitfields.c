/* Entire article can be found here
   http://www.harishnote.com/2016/01/c-programming-58-structure-bitfeilds.html
*/
#include <stdio.h>

typedef struct {
  char name[20];
  int class;
  int age;
}student_t;

typedef struct {
  char name[20];
  int class:4;
  int age:7;
}student_new_t;

int main(void)
{
  student_t a = {"Ram", 7, 2};
  student_new_t b = {"Mason", 9, 4};

  printf("Student %s age is %d and studies in %d\n",
	 a.name, a.age, a.class);
  printf("Student %s age is %d and studies in %d\n",
	 b.name, b.age, b.class);

  printf("sizeof student_t is %d\n", sizeof(student_t));
  printf("sizeof student_new_t is %d\n", sizeof(student_new_t));
  
  return 0;
}
