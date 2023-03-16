#include <stdio.h>

int main()
{
    int bin,a,b;
    scanf("%d", &bin);
    a = bin/16; b = bin%16;
    if (bin==0)
    {
        printf("%d", 0);
    }
    else
    {   
        printf("%d%d", a,b);
    }

    return 0;
}