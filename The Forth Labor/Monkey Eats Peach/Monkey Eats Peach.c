#include <stdio.h>
int main()
{
    int i,origin,final=1;
    for (i=9;i>=1;i--)
    {
        origin=(final+1)*2;
        final=origin;
    }
    printf("第一天摘了 %d 个桃子\n",origin);
    return 0;
}