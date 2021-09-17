#include<stdio.h>
#include<string.h>
#include<time.h>
#include"game.h"
//   | | 
//  -----
//   | | 
//  -----
//   | | 
int main()
{
    int a = 0;
    menu();
    do {
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            game();
            break;
        case 2:
            break;
        default:
            printf("请重新选择\n");
        }

    } while (a != 2);

    return 0;
}
