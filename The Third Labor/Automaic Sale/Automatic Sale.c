#include <stdio.h>
int main()
{
    int choice;
    printf("欢迎使用！请选择你要的饮料，输入数字以选定\n1、Coffee\n2、Tea\n3、Coca-Cola\n");
    scanf("%d",&choice);
    if(choice>=1 && choice <=3)
    {
        switch(choice)
        {
            case 1:printf("你选择了Coffee\n");break;
            case 2:printf("你选择了Tea\n");break;
            case 3:printf("你选择了Coca-Cola\n");break;
        }
    }
    else
    {
        printf("键入值不对！\n");
    }
    return 0;
}