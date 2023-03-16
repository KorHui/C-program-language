#include <stdio.h>

int main()
{
    int n=0, count=0, tem = 1;
    scanf("%d", &n);
    count = (n+1)/2;
    for (int i = 0; i < count-1; i++)
    {
        printf("%d ", tem);
        tem = tem + 2;
    }
    printf("%d", tem);
    return 0;

}