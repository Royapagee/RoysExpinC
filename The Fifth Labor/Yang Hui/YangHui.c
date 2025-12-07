#include <stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX]={0};
    int i, j;
    for(i=0;i<MAX;++i)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1;j<i;++j)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    for(i=0;i<MAX;++i)
    {
        for(j=0;j<=i;++j)
        {
            printf("%d",a[i][j]);
            if(j!=i) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
