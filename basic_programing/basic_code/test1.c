#include <stdio.h>
#include <math.h>
int main()
{
    double n=0, foot=0, inch=0;
    scanf("%lf", &n);
    foot = n/100/0.3048;
    int a = floor(foot); 
    inch=((n/30.48)-a)*12;
    int b = floor(inch);
    printf("%d %d", a, b);
    return 0;
}