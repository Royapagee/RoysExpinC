#include <stdio.h>
#define MAX 100
#define TOTAL (MAX*2+1)

int main()
{
    char s1[MAX+1];
    char s2[MAX+1];
    char res[TOTAL];
    int i=0;
    int j=0;
    printf("请输入第一个字符串：");
    gets(s1);
    printf("请输入第二个字符串：");
    gets(s2);
    while(s1[i]!= '\0')
    {
        res[i]=s1[i];
        ++i;
    }
    j=0;
    while (s2[j]!='\0')
    {
        res[i+j]=s2[j];
        ++j;
    }
    res[i+j]='\0';
    printf("连接后的字符串：%s\n", res);
    return 0;
}
