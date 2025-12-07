#include <stdio.h>
int main() {
  int a,b,temp,c,c1,c2,p;
  scanf("%d %d", &a, &b);//a和b是从键盘获得的两个正整数
  c1=a;
  c2=b;
  while(c2!=0)
   {
     temp=c2;
     c2=c1%c2;
     c1=temp;
   }
  c=c1;
  p=a*b;
  printf("%d %d\n", c,p/c);//c是最大公约数，p/c是最小公倍数
    return 0;
}
