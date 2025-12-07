#include <stdio.h>

int main()
{
    int num1,num2,a,b,temp;
    int gcd,lcm;

    printf("请输入两个正整数（用空格分隔）：\n");
    scanf("%d %d", &num1,&num2);
    a=num1;
    b=num2;
    // 使用辗转相除法求最大公约数
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    // 计算最小公倍数
    lcm=(num1 * num2)/gcd;
    printf("最大公约数是：%d，最小公倍数是：%d\n",gcd,lcm);
    return 0;
}