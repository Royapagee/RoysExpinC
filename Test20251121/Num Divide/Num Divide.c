#include <stdio.h>
int main() 
{
  int num, i;
  for (num = 300; num <= 600;)
  {
    for (i = 1; i <= 5 && num <=600;)
    {
      if (num % 3 == 0 && num % 7 != 0)
      {
        printf("%d", num);
        if(i<=4)
          printf(" ");
        i++;
      }
      num++;
    }
    printf("\n");
  }
  return 0;
}