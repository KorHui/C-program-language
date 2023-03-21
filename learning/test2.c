#include <stdio.h>
#include <math.h>

int main()
{
    int t,n,bin,count=1,sum=0;
    scanf("%d", &n);
    while (n!=0)
    {
        t = n%10;
        n = n/10;
        if ((t+count)%2==0)
        {
            bin=1;
        }
        else
        {
            bin=0;
        }
        sum += bin*pow(2,count-1);
        count++;
    }
    printf("%d", sum);

    return 0;
}