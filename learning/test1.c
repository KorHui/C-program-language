#include <stdio.h>

int main()
{
    int n, number[100], count=1, even=0, odd=0;
    scanf("%d", &number[0]);
    for (int i = 1; number[i-1] != -1; i++)
    {
        scanf("%d", &number[i]);
        count++;
    }
    for (int i = 0; i < count-1; i++)
    {
        if (number[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        } 
    }
    printf("%d %d", odd, even);
    
    
    return 0;
}