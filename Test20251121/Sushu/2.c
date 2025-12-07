#include <stdio.h>
int main()
{
  int i;
  char a[6];
  for(i=0;i<=6;i++)
    {
      scanf("%c",&a[i]);
    }
  if (a[5] !=a[0] || a[4] != a[1] || a[3] != a[2])
	   printf("No\n");
   else printf("Yes\n");
 return 0;
}