/* Entire article can be found here
   http://www.harishnote.com/2016/01/c-programming-58-structure-bitfeilds.html
*/
#include <stdio.h>

#define MALE 1
#define FEMALE 2

typedef struct {
  char name[20];
  char class:4;
  char age:7;
  char sex:2;
}student_new_t;

int main(void)
{
  student_new_t b = {"Mason", 9, 4, MALE};

  printf("Student %s age is %d sex is %d and studies in %d\n",
	 b.name, b.age, b.sex, b.class);
  printf("Size of student_new_t is %d\n", sizeof(student_new_t));
  
  return 0;
}
