#include <stdio.h>
#include <windows.h>

int main()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE)
    {
        fprintf(stderr, "GetStdHandle 失败\n");
        return 0;
    }

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (!GetConsoleScreenBufferInfo(hOut, &csbi))
    {
        fprintf(stderr, "GetConsoleScreenBufferInfo 失败\n");
        return 0;
    }
    //读取窗口宽度
    int width  = csbi.srWindow.Right  - csbi.srWindow.Left + 1;
    int height = csbi.srWindow.Bottom - csbi.srWindow.Top  + 1;
    //窗口宽度存储为整形
    int line1=4,line2=8,line3=24;
    int empty1,empty2,empty3;
    empty1=(width-line1)/2;
    empty2=(width-line2)/2;
    empty3=(width-line3)/2;
    //确定居中输出时的空格数量并向下取整
    for(int i=0; i<empty1; i++) printf(" ");
    printf("悯农");
    printf("\n");
    // 打印标题
    for(i=0; i<empty2; i++) printf(" ");
    printf("——李绅");
    printf("\n");
    // 打印作者
    for(i=0; i<empty3; i++) printf(" ");
    printf("锄禾日当午，汗滴禾下土。");
    printf("\n");
    for(i=0;i<empty3; i++) printf(" ");
    printf("谁知盘中餐，粒粒皆辛苦。");
    printf("\n");
    return 0;
}
