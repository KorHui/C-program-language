#include <stdio.h>
 int main()
 {
    int n,a,b,c;
    scanf("%d", &n);
    a = n/100;
    c = n%10;
    b = (n-a*100-c)/10;

    if (c==0)
    {
        if (b==0)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d%d", b, a);
        }
    }
    else
    {
        printf("%d%d%d", c, b, a);
    }
        
    return 0;
 }