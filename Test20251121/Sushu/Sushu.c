#include<stdio.h>
int main()
{
  int num,i,a,b;
  for(num=200;num<=300;)
    {
    for(i=1;i<=6;)
      {
        for(a=num;a>=1;a--)
          {
            if(num%a==0)
              b++;
            if(b<=2)
              printf("%d ",num);
            num++;
          }
      }
      printf("\n");
    }
}