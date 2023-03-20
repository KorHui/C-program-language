#include <stdio.h>

int main()
{
    int count = 0, isPrime = 1;

    for (int i = 2; i < 100; i++)
    {
        isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)//is not Prime
            {
                isPrime = 0;
                break;
            }  
        }
        if (isPrime==1)
        {
            printf("%d ", i);
            count++;
        }   
       
    }
    printf("\n%d", count);
    return 0;
}