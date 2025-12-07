#include <stdio.h>
int main()
{
    float height=100,length=100;
    int times=0;
    while (times<=9)
    {
        times++;
        height=height/2;
        length=length+2*height;
    }
    printf("弹起高度为%f米,总共经过了%f米\n",height,length);
    return 0;
}