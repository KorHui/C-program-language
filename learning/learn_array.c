#include <stdio.h>

int main()
{
    const int number = 10;
    int i, count[number]; int n=0;
    for ( i = 0; i < number; i++)//init
    {
        count[i] = 0;
    }
    printf("������:");
    scanf("%d", &n);
    while (n!=-1)//count
    {
        if (n>=0&&n<=9)
        {
            count[n]++;
        }
        scanf("%d", &n);
    }
    for ( i = 0; i < number; i++)//output
    {
        printf("%d������%d��!\n", i, count[i]);
    }
    
    return 0;
}