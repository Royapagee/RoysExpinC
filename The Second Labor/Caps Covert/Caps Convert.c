#include <stdio.h>

int main()
{
    char caps,uncaps;
    printf("请输入大写英文\n");
    scanf("%c",&caps);
    uncaps=caps+32;
	//转换为小写字符
    printf("对应的小写为\n%C\n",uncaps);
    return 0;
}