#include <stdio.h>

int main()
{
    double x, f; int tem=0;
    scanf("%lf", &x);
    if (x==0)
    {
        tem = 0;
    }
    else
    {
        tem += (x>0)?1:2;
    }
    
    switch (tem)
    {
    case 1://x>0
        f = 2*x;
        break;
    case 2://x<0
        f = -1;
        break;
    
    default://x==0
        f = 0;
        break;
    }

    printf("%lf", f);
    return 0;
}