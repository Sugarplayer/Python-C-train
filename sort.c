#include<stdio.h>
#include<string.h>
#include<time.h>
void paixu(int arr1[])
{
    int a = 0;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4 - j; i++)
        {
            if (arr1[i] < arr1[i+1])
            {
                a = arr1[i];
                arr1[i] = arr1[i + 1];
                arr1[i + 1] = a;
            }

        }
    }

}
int main()
{
    int arr[4] = { 1,2,3,4 };
    paixu(arr);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
