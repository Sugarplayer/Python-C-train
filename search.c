#include<studio.h>
int count_bit_one(unsigned int a)
{
  int count = 1
  while(n)
  {
    if(a%2 ==1)
    {
      count++;
    }
    n = n/2;
  }
}
int main()
{
  int a = 0;
  scanf("%d",&a);
  int count = count_bit_one(a);
  printf("count=%d\n",count);
  return 0;
}
