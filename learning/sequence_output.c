#include <stdio.h>

int main()
{
    int num,x,d,t=0;
    scanf("%d", &num);
    while (num>0)
    {
        d = num%10;
        t = t*10+d;
        num = num/10;
    }
    
    while (t>0)
    {
        x = t%10;
        printf("%d ", x);
        t = t/10;
    }
    
    return 0;
}//700≤ª  ”√