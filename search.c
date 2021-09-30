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
//除了上述方法，可以把数字按位与1相与，将二进制序列所有位置都移动至最低位置

/*
int count_bit_one(int n)
{
  int count = 1
  int i =0;
  for(i = 0;i<32;i++)
    {
      if(((n>>i)&1)==1)
    {
      count++;
    }
    }

    return count;
}


*/
//除了上述方法，可以把数字n与数字n-1相与

/*
int count_bit_one(int n)
{
  int count = 1
  while(n)
    {
    n = n &(n-1);
    count++;
    }

    return count;
}


*/
