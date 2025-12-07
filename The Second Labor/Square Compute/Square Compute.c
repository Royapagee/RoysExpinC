#include <stdio.h>
#define PI 3.1415

int main()
{
    float r,s,c;
    printf("请输入圆的半径\n");
	//获取圆的半径
	scanf("%f",&r);
	c=2*r*PI;
    s=r*r*PI;
	//计算周长c和面积s
    printf("圆的周长为\n%f\n面积为\n%f\n",c,s);
}