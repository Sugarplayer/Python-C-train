#include<stdio.h>
int main()
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int j = sizeof(a)/4;
    int k = j / 2;
    int z = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (a[k] == 3)
        {
            printf("需要找的值为%d\n", k);
            break;
        }
        else if (a[k] > 3)
        {
            j = k;
            k = (j+z) / 2;
        }
        else
        {
            z = k;
            k = (j + z) / 2;

        }
            

    }
    return 0;
}
