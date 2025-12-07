#include <stdio.h>
int main()
{
    int year,month,day,sum,run;
    printf("请输入年月日");
    scanf ("%d/%d/%d",&year,&month,&day);
    if(month < 1 || month >=13)
    {
        printf("值不对！");
    }
    else
    {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            run=1;
            switch (month)
            {
                case 1 : printf ("%d" , day); break;
                case 2 : day = 31 + day;printf ("%d" ,day); break;
                case 3 : day = 60 + day;printf ("%d" ,day); break;
                case 4 : day = 91 + day;printf ("%d" ,day); break;
                case 5 : day = 121 + day;printf ("%d" ,day); break;
                case 6 : day = 152 + day;printf ("%d" ,day); break;
                case 7 : day = 182 + day;printf ("%d" ,day); break;
                case 8 : day = 213 + day;printf ("%d" ,day); break;
                case 9 : day = 244 + day;printf ("%d" ,day); break;
                case 10 : day = 274 + day;printf ("%d" ,day); break;
                case 11 : day = 305 + day;printf ("%d" ,day); break;
                case 12 : day = 335 + day;printf ("%d" ,day); break;
            }
        }
        else
        {
            run=0;
            switch (month)
            {
                case 1 : printf ("%d" , day); break;
                case 2 : day = 31 + day;printf ("%d" ,day); break;
                case 3 : day = 59 + day;printf ("%d" ,day); break;
                case 4 : day = 90 + day;printf ("%d" ,day); break;
                case 5 : day = 120 + day;printf ("%d" ,day); break;
                case 6 : day = 151 + day;printf ("%d" ,day); break;
                case 7 : day = 181 + day;printf ("%d" ,day); break;
                case 8 : day = 212 + day;printf ("%d" ,day); break;
                case 9 : day = 243 + day;printf ("%d" ,day); break;
                case 10 : day = 273 + day;printf ("%d" ,day); break;
                case 11 : day = 304 + day;printf ("%d" ,day); break;
                case 12 : day = 334 + day;printf ("%d" ,day); break;
            }
        }
    }
    return 0;
}