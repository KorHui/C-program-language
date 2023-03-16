#include <stdio.h>

int main()
{
    int time1=0,count=0,h=0,m=0,a=0,b=0,test=0,time2=0;
    scanf("%d %d", &time1, &count);
    h = count/60; m = count%60;
    test = time1 + h*100; 
    a = test/100; b = test%100;
    b = b + m;
    //printf("%d %d\n", a, b);
    if (b>59)
    {
        b = b-60;
        a++;
    }
    else if (b<0)
    {
        b = b+60;
        a--;
    }
    else
    {
        b = b;
    }
    if (a>23)
    {
        a = a-24;
    }
    else if (a<0)
    {
        a = a+24;
    }
    else
    {
        a = a;
    }
    if (a==0)
    {
        if (b==0)
        {
            printf("%d", 0);
        }
        else
        {
            printf("%03d", b);
        }
        
    }
    else
    {     
        time2 = 100*a + b;
        printf("%d", time2);
    }
    
    return 0;
}

//1120 110 1310
//129 -60 029
//129 -80 009 
//420 -40!!!