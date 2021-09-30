#include<stdio.h>

int get——diff(int m,int n)
{
int tmp = m^n;
int count = 0;
while(tmp)
{
tmp = tmp&(tmp-1);
count++;
}
return count;
}

int main()
{
  int m = 0;
  int n = 0;
  scanf("%d%d",&m,&n);
  int count = get——diff(m,n);
  printf("%d",count);
  
  return 0;
}
