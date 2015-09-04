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

	printf("Student %s age is %d and studies in %d\n",
			 a.name, a.age, a.class);
	printf("Student %s age is %d and studies in %d\n",
			 b.name, b.age, b.class);

	if(a.age > b.age) {
		printf("%s is older\n", a.name);
	}else if(a.age < b.age) {
		printf("%s is older\n", b.name);
	}else {
		printf("%s and %s are both of same age\n",
				 a.name, b.name);
	}
	
   return 0;
}
