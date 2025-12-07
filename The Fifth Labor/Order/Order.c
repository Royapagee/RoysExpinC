#include <stdio.h>
int main()
{
    int a[1000];
    int n=0;
    int num;
    int i,j,tmp;
	printf ("输入多个整数，用空格分隔：");
    while(scanf("%d",&num)==1)
    {
        a[n++]=num;
        if(getchar()=='\n') break;
    }
    for(i=0;i<n-1;++i)
        for(j=0;j<n-1-i;++j)
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j + 1];
                a[j+1]=tmp;
            }
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
	printf("\n");
    return 0;
}
