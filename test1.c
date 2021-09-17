#include<stdio.h>
#include<string.h>
#include<time.h>
void play()
{
    int guess = 0;
    int ret = 0;
    
    ret = rand() % 100 + 1;
    while (1)
    {
        printf("请输入数字:>\n");
        scanf("%d", &guess);
        if (ret < guess)
            printf("大了\n");
        else if (ret > guess)
            printf("小了\n");
        else
        {
            printf("正确！\n");
            break;
        }
           
    }
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
       printf("##########################\n");
       printf("##  1.play   2.exit     ##\n");
       printf("##########################\n");
       scanf("%d",&input);
       switch (input)
         {
        case 1:
            play();
            break;
        case 2:
            printf("游戏结束\n");
            break;
        default:
            printf("重新选择\n");
            break;
          }
    } while (input!=2);
    
    return 0;
}
