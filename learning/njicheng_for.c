#include <stdio.h>

int main()
{
    int n=0, tem=1;
    printf("������һ������:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        tem = tem*i;
    }
    printf("%d!=%d", n, tem);
    return 0;
}