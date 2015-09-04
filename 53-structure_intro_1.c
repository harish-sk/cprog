#include <stdio.h>

int main()
{
   char name[5][20] = {"Ram", "Mason", "Akbar", "Emma", "David"};
   int  age[5] = {7, 9, 5, 10, 14 };
   int  class[5] = {2, 4, 1, 5, 9};
   
   int i = 0;

   for(i = 0; i < 5; i++) {
		printf("%s is %d years old and studies in %d Class\n",
				 name[i], age[i], class[i]);
   }
   return 0;
}
