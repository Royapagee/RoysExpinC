#include <stdio.h>
int main()
{
    int num;
    scanf("请输入一个数：%d",num);
    if (num>=10 && num%11==0)
    {
        printf("good");
    }
    else printf("bad");
}