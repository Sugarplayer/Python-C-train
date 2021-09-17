#include<stdio.h>
#include<time.h>
void menu()
{
    printf("######################################\n");
    printf("###1.  play#######2.  out    #########\n");
    printf("######################################\n");
}
void game()
{
    srand(time(NULL));
    char a[5][5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        if (0 == i % 2)
        {
            for (int j = 0; j < 5; j++)
            {
                if (0 == j % 2)
                {
                    a[i][j] = ' ';
                }
                else
                    a[i][j] = '|';
            }
        }
        if (1 == i % 2)
        {
            for (int j = 0; j < 5; j++)
            {
                a[i][j] = '-';
            }
        }

    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }
    int flag = 0;
    while (flag == 0)
    {
        printf("玩家输入\n");
        int b = 0, c = 0;
        scanf("%d %d", &b, &c);
        if (a[b][c] == ' ')
        {
            a[b][c] = '+';
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                    printf("%c", a[i][j]);
                printf("\n");
            }
        }
        else
            printf("请重新输入");
        int e = 0;
        do {
            printf("电脑输入\n");
            int c = rand() % 3 * 2;
            printf("%d\n",c);
            int d = rand() % 3 * 2;
            if (a[c][d] == ' ')
            {
                a[c][d] = '*';
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 5; j++)
                        printf("%c", a[i][j]);
                    printf("\n");
                }
                e = 1;
            }
        } while (e !=1);
        if (a[0][0] == a[0][2] && a[0][0] == a[0][4] && a[0][0] == '+')
        {
            flag = 1;
            break;
        }    
        else if (a[0][0] == a[2][2] && a[0][0] == a[4][4] && a[0][0] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[0][0] == a[2][0] && a[0][0] == a[4][0] && a[0][0] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[0][4] == a[2][2] && a[0][4] == a[4][0] && a[0][4] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[2][0] == a[2][2] && a[2][0] == a[2][4] && a[2][0] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[0][2] == a[2][2] && a[0][2] == a[4][2] && a[4][2] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[0][4] == a[2][4] && a[0][4] == a[4][4] && a[4][4] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[4][0] == a[4][2] && a[4][0] == a[4][4] && a[4][4] == '+')
        {
            flag = 1;
            break;
        }
        else if (a[0][0] == a[0][2] && a[0][0] == a[0][4] && a[0][0] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[0][0] == a[2][2] && a[0][0] == a[4][4] && a[0][0] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[0][0] == a[2][0] && a[0][0] == a[4][0] && a[0][0] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[2][0] == a[2][2] && a[2][0] == a[2][4] && a[2][0] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[0][2] == a[2][2] && a[0][2] == a[4][2] && a[4][2] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[0][4] == a[2][2] && a[0][4] == a[4][0] && a[0][4] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[0][4] == a[2][4] && a[0][4] == a[4][4] && a[4][4] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[4][0] == a[4][2] && a[4][0] == a[4][4] && a[4][4] == '*')
        {
            flag = 2;
            break;
        }
        else if (a[0][0] != ' ' && a[0][2] != ' ' && a[0][4] != ' '&& a[2][0] != ' '&& a[2][2] != ' '&& a[2][4] != ' '&& a[4][0] != ' '&& a[4][2] != ' '&& a[4][4] != ' ')
        {
            flag = 3;
            break;
        }
        printf("%d", flag);
    } 
    switch (flag)
    {
    case 1:
        printf("玩家赢！\n");
        break;
    case 3:
        printf("平局\n");
        break;
    case 2:
        printf("电脑赢\n");
        break;
    }
}
