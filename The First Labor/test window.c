// get_console_size.c
#include <windows.h>
#include <stdio.h>

int main()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hOut == INVALID_HANDLE_VALUE)
    {
        fprintf(stderr, "GetStdHandle 失败\n");
        return 1;
    }

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (!GetConsoleScreenBufferInfo(hOut, &csbi))
    {
        fprintf(stderr, "GetConsoleScreenBufferInfo 失败\n");
        return 1;
    }

    /* 可见窗口的大小（字符数） */
    int width  = csbi.srWindow.Right  - csbi.srWindow.Left + 1;
    int height = csbi.srWindow.Bottom - csbi.srWindow.Top  + 1;

    printf("当前控制台窗口大小：%d 列 × %d 行\n", width, height);

    /* 下面就可以像普通变量一样使用 width / height 了 */
    printf("%d,%d",width,height);
    return 0;
}