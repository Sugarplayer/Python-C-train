#include<stdio.h>
#include<string.h>
#include<time.h>
int mul(int x)
{
    if (x <=2)
        return 1;
    else
        return mul(x - 1) + mul(x - 2);

}
int main()
{
    int input = 0;
    printf("列出N个斐波那契数列");
    scanf("%d", &input);
    int output = 0;
    output = mul(input);
    printf("%d个斐波那契数列为%d", input, output);
    return 0;
}
