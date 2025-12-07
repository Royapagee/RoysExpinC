#include <stdio.h>

int main() 
{
    int num,length = 0;
    printf("请输入一个正整数（不超过5位）：\n");
    scanf("%d", &num);
    char s[6];
    if (num <= 0 || num >= 100000)
    {
        printf("值不对！\n");
    } 
    else
    {
        int compute = num;
        do {
            length++;
            compute /= 10;
        } while (compute != 0);
        printf("这是一个 %d 位数\n", length); 
        //计算位数
        sprintf(s, "%d", num);
        for (int i = 0; i < 5; ++i)
			printf("%c ", s[i]);
        printf("\n");
        //分别输出每一位上的数字
        do {
            printf("%d", num % 10);
        } while (num /= 10);
        //逆序输出数字
    }
    return 0;
}

