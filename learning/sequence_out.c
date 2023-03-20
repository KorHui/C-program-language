#include <stdio.h>

int main()
{
    int n=0, mask=1, d, num;
    scanf("%d", &n);
    num = n;
    while (n>9)
    {
        n = n/10;
        mask = mask*10;
    }
    printf("%d\n", mask);
    n = num;
    while (mask>0)
    {
        d = n/mask;
        n = n%mask;
        mask = mask/10;
        printf("%d ", d);
    }

    return 0;
}