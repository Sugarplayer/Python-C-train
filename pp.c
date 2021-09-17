#include<stdio.h>
int main()
{
    int a;
    printf("请输入数字：\n");
    scanf("%d",&a);
    int b[100];
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 1)
        {
            b[i] = 1;
            printf("%d is 基数\n", i);
        }
        else
            b[i] = 0;
    }
    printf("%d", b);
    printf("%d", &b);
    return 0;
}
