#include <stdio.h>
int main()
{
    int i,a[5];
    printf("请输入五个数");
    for(i=0;i<5;i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++);
    {
        if (a[i]>0)
    printf("%4d",a[i]);
    }
    return 0;
}