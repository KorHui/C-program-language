#include <stdio.h>

int main()
{
    int hour1=0,hour2=0,minute1=0,minute2=0, im = 0, it = 0;
    scanf("%d %d", &hour1,&minute1);
    scanf("%d %d", &hour2,&minute2);
    im = hour2 - hour1; it = minute2 - minute1;
    if (it<0)
    {
        it = 60 + it; im=im-1;
    }
    printf("时间差为%d时%d分", im, it);
    return 0;
    
}