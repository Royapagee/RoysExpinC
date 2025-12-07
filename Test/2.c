#include <stdio.h>
  int main()
{
  int sum=0,step=1,num=5,i,a;
  for(a=1;a<=num;)
    {
      for(i=a;i>=1;i--)
        {
          step=1*i;
        }
      sum=sum+step;
      a++;
    }
  printf("%d\n",sum);//sum是1-5的阶乘之和
  return 0;
}