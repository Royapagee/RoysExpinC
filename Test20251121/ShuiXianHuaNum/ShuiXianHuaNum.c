#include <stdio.h>

int main()
{
    int num, i, ge, shi, bai, temp;
    for (num = 100; num <= 999; num++)
    {
        i=100;
        bai = num / i;
        temp = num % i;
        shi = temp / (i / 10);
        temp = temp % (i / 10);
        ge = temp / 1;
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num)
            printf("%d ", num);
    }
    return 0;
}
