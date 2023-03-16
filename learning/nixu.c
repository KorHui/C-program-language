#include <stdio.h>

int main()
{
    int tem = 0, a = 0, b = 0, c = 0;
    // while (tem<100 || tem >999)
    // {
    //     printf("请输入100~999之间的一个三位数:");
    //     scanf("%d", &tem);
    // }
    scanf("%d", &tem);
    a = tem / 100; c = tem % 10; b = (tem - 100*a - c)/10;
    if (c==0)
    {
        if (b==0)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d%d",b,a);
        }
        
    }
    else
    {
        printf("%d%d%d",c,b,a);
    }
    return 0;  
}