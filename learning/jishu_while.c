#include <stdio.h>

int main()
{
    int a = 0, count = 0;
    printf("������һ������:");
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
    printf("һ����%d������", count);
    return 0;
}