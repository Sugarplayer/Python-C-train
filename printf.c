#include<stdio.h>
int main()
{
    char str[] =  "we are hungry";
    char str1[] = "#############";
    int left = 0;
    int right = sizeof(str1)/sizeof(str1[0])-2;
    while (left <= right)
    {

            printf("%s\n", str1);
            str1[left] = str[left];
            str1[right] = str[right];
            left++;
            right--;

    }
   
    return 0;
}
