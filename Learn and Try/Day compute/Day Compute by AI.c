#include <stdio.h>

int main(void)
{
    int year, month, day;
    int daysBeforeMonth[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int sum;

    printf("请输入年月日（格式 xxxx/xx/xx）：");
    scanf("%d/%d/%d", &year, &month, &day);

    if (month < 1 || month > 12) {
        printf("月份值不对！\n");
        return 0;
    }

    /* 闰年判断 */
    int run = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    printf("%d %s闰年\n", year, run ? "是" : "不是");

    /* 计算当年第几天 */
    sum = daysBeforeMonth[month] + day;
    if (run && month > 2) sum++;   /* 闰年 2 月多 1 天 */
    printf("该日是 %d 年的第 %d 天\n", year, sum);

    return 0;
}