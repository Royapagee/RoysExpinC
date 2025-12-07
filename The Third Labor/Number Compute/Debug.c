#include <stdio.h>

int main()
{
    int i,num,compute,length = 0;
    char s[6];

    printf("请输入一个正整数（不超过5位）：\n");
	scanf("%d", &num);
    if (num <= 0 || num >= 100000)
    {
        printf("值不对！\n");
        return 0;
    }
	else
	{
		length = 0;
		compute = num;
		do {
			length++;
			compute /= 10;
		} while (compute != 0);
		printf("这是一个%d位数\n", length);
		//计算位数
		sprintf(s, "%d", num);
		//转字符串
		for (i = 0; i < length; ++i)
		{
			printf("%c ", s[i]);
		}
		putchar('\n');
		//分别输出每一位
		do {
			printf("%d", num % 10);
		} while (num /= 10);
		//逆序输出
		printf("\n");
	}
    return 0;
}