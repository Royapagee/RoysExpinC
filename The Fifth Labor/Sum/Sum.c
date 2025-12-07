#include <stdio.h>
int main()
{
    int a[3][3];
    int sum=0;
    int i,j;
    printf("请输入 3*3 矩阵的 9 个整数：\n");
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
            scanf("%d", &a[i][j]);
    for(i=0;i<3;++i)
    {
        sum+=a[i][i];  
        sum+=a[i][2-i];
    }

    printf("对角线元素之和为：%d\n", sum);
    return 0;
}
