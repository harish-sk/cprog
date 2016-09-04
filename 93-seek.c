#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
typedef struct student_tag {
   char name[20];
   int age;
   int class;
}student_t;
int main()
{
   student_t s[5] = {{"Ram", 7, 2},
                     {"Mason", 9, 4},
                     {"Akbar", 5, 1},
                     {"Emma", 10, 5},
                     {"David", 14, 9}};
   student_t x;
	     
   FILE *fpw, *fpr;
   int rc;
   
   fpw = fopen("/tmp/test_file", "w+");

   if(fpw == NULL) {
      printf("fopen failed with errorno %d\n", errno);
      exit(-1);
   }
  
   rc = fwrite(&s, sizeof(student_t), 5, fpw);

   if(rc != 5) {
     printf("Writing to file failed with errono %d\n", ferror(fpw));
     exit(-1);
   }
   
   if(fclose(fpw) == EOF) {
      printf("fclose failed with errorno %d\n", errno);
      exit(-1);
   }
   fpw = NULL;

   fpr = fopen("/tmp/test_file", "r");

   if(fpr == NULL) {
      printf("fopen failed with errorno %d\n", errno);
      exit(-1);
   }

   printf("3 rd item is \n");
   fseek(fpr, sizeof(student_t) * 3, SEEK_SET);
   rc = fread(&x, sizeof(student_t), 1, fpr);

   if(rc != 1) {
     printf("Writing to file failed with errono %d\n", ferror(fpr));
     exit(-1);
   }
   printf("name is %s, age is %d, class is %d\n",
           x.name, x.age, x.class);

   rewind(fpr);
	   
   printf("1 st item is \n");
   fseek(fpr, sizeof(student_t) * 1, SEEK_SET);
   rc = fread(&x, sizeof(student_t), 1, fpr);

   if(rc != 1) {
     printf("Writing to file failed with errono %d\n", ferror(fpr));
     exit(-1);
   }
   printf("name is %s, age is %d, class is %d\n",
           x.name, x.age, x.class);
 
   if(fclose(fpr) == EOF) {
      printf("fclose failed with errorno %d\n", errno);
      exit(-1);
   }
   fpr = NULL;

   return 0;
}
