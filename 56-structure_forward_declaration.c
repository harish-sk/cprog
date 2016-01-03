#include <stdio.h>

struct node;

struct node {
  int val;
  struct node *next;
};

typedef struct node node_t;

struct node {
  int val;
  node_t *next;
};


int main(void)
{
  struct node a;
  
  return 0;
}
