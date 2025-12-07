#include <stdio.h>
int main()
 {
    int m, n, a, b, temp,c,d;
	printf("请输入两个正整数:");
	scanf("%d %d",&m,&n);
    a = m;
    b = n;
    if (a < b) 
	{
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
	{
        temp = a % b;  
        a = b;         
        b = temp;      
    }
    c = b;
    d = m*n/c;
    printf("最大公约数：%d\n", c);
    printf("最小公倍数：%d\n", d);

    return 0;
}