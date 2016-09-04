volatile int y = 10;
int sum;
int main()
{
  for(int i = 0; i < 1000; i++) {
   sum = sum + y;
  }
}
