#include <stdio.h>

int main()
{
    int time_utc=0, time_bjt=0;
    int a=0, b=0, c=0, d=0;
    //����Ϊ0~2359
    scanf("%d", &time_utc);
    //������õ�a,b,c,d��ֵ

    if (time_utc>999)
    {
        d = time_utc % 10;
        a = time_utc / 1000;
        time_utc = time_utc / 10;
        c = time_utc % 10;
        b = (time_utc - 100*a - c)/10;
        //printf("%d %d %d %d\n", a,b,c,d);
    }
    else if (time_utc>99)
    {
        a = 0;
        b = time_utc / 100;
        d = time_utc % 10;
        c = (time_utc-b*100-d)/10;
        //printf("%d %d %d %d\n", a,b,c,d);
    }
    else if (time_utc>9)
    {
        a = 0; b = 0;
        c = time_utc / 10;
        d = time_utc % 10;
        //printf("%d %d %d %d\n", a,b,c,d);
    }
    else
    {
        a = 0; b = 0; c = 0;
        d = time_utc;
        //printf("%d %d %d %d\n", a,b,c,d);
    }
    //����BJT����ȥ8h��
    if (a==0)
    {
        if (b<8)
        {
            b = b-8+24;
        }
        else
        {
            b=b-8;
        }      
    }
    else
    {
        if (b<8)
        {
            b = b-8+10;
            a = a-1;
        }
        else
        {
            b=b-8;
        } 
    }
    //�������Ҫ��ĸ�ʽ
    if (a==0)
    {
        if(b==0)
        {
            if (c==0)
            {
                if (d==0)
                {
                    printf("%d\n", 0);
                }
                else
                {
                    printf("%d\n", d);
                }  
            }
            else
            {
                printf("%d%d\n", c, d);
            }
            
            
        }

        else
        {
            printf("%d%d%d\n", b, c, d);
        } 
    }
    else
    {
        printf("%d%d%d%d\n", a, b, c, d);
    }
    
    return 0;
}