#include <stdio.h>

int main()
{
    int a = 0, count = 0;
    printf("请输入一个整数:");
    scanf("%d", &a);
     if (a==0)
    {
        count = 1;
    }
    while (a!=0)
    {
        a = a / 10;
        count ++;
    }  
    printf("一共有%d个数字", count);
    return 0;
}