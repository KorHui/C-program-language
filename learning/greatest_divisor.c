/*b==0, over,result==a;
else, t = a%b, a = b, b = t
first step
a   b   t
12  18  12
18  12  6
12  6   0
6   0
*/
#include <stdio.h>

int main()
{
    int a,b,t,x,y;
    scanf("%d %d", &x,&y);
    a = x; b = y;
    while (b!=0)
    {
        t = a%b;
        a = b;
        b = t;
    }
    printf("%d和%d的最大公约数为%d", x,y,a);
    return 0;
}