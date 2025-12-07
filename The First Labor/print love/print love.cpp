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
    int line1=15,line2=17,line3=17,line4=15,line5=13,line6=11,line7=9,line8=7,line9=5,line10=3,line11=1;
    int empty1,empty2,empty3,empty4,empty5,empty6,empty7,empty8,empty9,empty10,empty11;
    empty1=(width-line1)/2;
    empty2=(width-line2)/2;
    empty3=(width-line3)/2;
    empty4=(width-line4)/2;
    empty5=(width-line5)/2;
    empty6=(width-line6)/2;
    empty7=(width-line7)/2;
    empty8=(width-line8)/2;
    empty9=(width-line9)/2;
    empty10=(width-line10)/2;
    empty11=(width-line11)/2;
    //确定居中输出时的空格数量并向下取整
    for(int i=0;i<empty1;i++) printf(" ");
    printf("######   ######");
    printf("\n");
    for(i=0;i<empty2;i++) printf(" ");
    printf("######## ########");
    printf("\n");
    for(i=0;i<empty3;i++) printf(" ");
    printf("#################");
    printf("\n");
    for(i=0;i<empty4;i++) printf(" ");
    printf("################");
    printf("\n");
    for(i=0;i<empty5;i++) printf(" ");
    printf("#############");
    printf("\n");
    for(i=0;i<empty6;i++) printf(" ");
    printf("###########");
    printf("\n");
    for(i=0;i<empty7;i++) printf(" ");
    printf("#########");
    printf("\n");
    for(i=0;i<empty8;i++) printf(" ");
    printf("#######");
    printf("\n");
    for(i=0;i<empty9;i++) printf(" ");
    printf("#####");
    printf("\n");
    for(i=0;i<empty10;i++) printf(" ");
    printf("###");
    printf("\n");
    for(i=0;i<empty11;i++) printf(" ");
    printf("#");
    printf("\n");
    return 0;
}