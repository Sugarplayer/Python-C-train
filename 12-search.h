#include<stdio.h>
void printf(int n)
{
  int i = 0;
  printf("奇数位");
  for(i = 30;i>=0;i-=2)
  {
    printf("%d",(n>>i)&1);
  }
  printf("\n");
  printf("偶数位");
  for(i = 31;i>=0;i-=2)
  {
    printf("%d",(n>>i)&1);
  }
  
}
