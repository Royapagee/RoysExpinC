#include<stdio.h>

void scorerange(int score, int s, int a, int b, int c, int d)
{
    int range;
    range = score / 10;
    switch (range)
    {
    case 1: case 2: case 3: case 4: case 5:d++;break;
    case 6:c++;break;
    case 7:b++;break;
    case 8:a++;break;
    case 9: case 10:s++;break;
    }
}

int main()
{
    int score[10];
    int menu, i;
    int s = 0, a = 0, b = 0, c = 0, d = 0;//各区段人数统计
    
    printf("请输入10个分数（0-100）：\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }
    //成绩为数组，命名为score
    printf("\n请选择功能（输入数字选择）:4、区间统计\n");
    scanf("%d", &menu);
    
    if(menu == 4)
    {
        // 统计各分数区间人数
        for(i = 0; i < 10; i++)
        {
            scorerange(score[i], &s, &a, &b, &c, &d);
        }
        printf("\n统计结果：\n");
        printf("优秀 (90-100分) %d 人\n", s);
        printf("良好 (80-89分) %d 人\n", a);
        printf("中等 (70-79分) %d 人\n", b);
        printf("及格 (60-69分) %d 人\n", c);
        printf("不及格 (0-59分) %d 人\n", d);
    }
    return 0;
}
