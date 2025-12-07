#include<stdio.h>
int main()
{
    float basic=1.0,develop=0.07,sum=1.0,percent;
	int year=1;
    for(;year<=10;year++)
        sum=sum*(1+0.07);
    percent=100*(sum-1)/basic;
	printf("10年后与现在相比增长了百分之%.2f\n",percent);
    return 0;
}