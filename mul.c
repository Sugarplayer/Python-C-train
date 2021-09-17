#includ<stdio.h>
int main()
{
    int z = 0;
    /*printf("请输入n\n");
    scanf("%d", &n);*/
    for (int n = 1; n <= 10; n++)
    {   
        int p = 1;
        for (int i = 1; i <= n; i++)
          {
              p =  p * i;
           }
        z = z + p;
    }
    
    printf("结果为%d",z);
    return 0;
}
