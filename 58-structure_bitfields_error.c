/* Entire article can be found here
   http://www.harishnote.com/2016/01/c-programming-58-structure-bitfeilds.html
*/
#include <stdio.h>

typedef struct {
  char name[20];
  int class:4;
  int age:7;
}student_new_t;

int main(void)
{
  student_new_t b = {"Mason", 9, 4};

  printf("Student %s age is %d and studies in %d\n",
	 b.name, b.age, b.class);
  printf("Address of name is %p, address of class is %p,"
          "address of age is %p\n",
	 &b.name, &b.class, &b.age);
  return 0;
}
