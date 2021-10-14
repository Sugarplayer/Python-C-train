#include<stdio.h>
int main()
{
  int a = 10;
  int b = 20;
  a = a^b;
  b = a^b;
  a = a^b;
  printf("%d,%d",a,b);
  return 0;
}

//先将a和b异或一下，然后再与b异或，即可交换a和b
