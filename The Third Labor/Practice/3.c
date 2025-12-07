#include <stdio.h>
int main()
{ 
    char ch = 'A';
    switch (ch)
    {
        case 'A': printf("优秀\n"); break;
        case 'B': printf("良好\n"); break; 
        default: printf("不及格\n"); 
    } 
    return 0;
}