#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, a, count=0;
    srand(time(0));
    n = rand()%100+1;
    //printf("%d\n", n);
    printf("1~100:\n");
    while (a!=n)
    {
        scanf("%d", &a);
        count ++;
        if (a>n)
        {
            printf("you guessed big\n");
        }
        else if (a<n)        
        {
            printf("your answer is little\n");
        }
        else
        {
            printf("Great, you are right and you tested %d times", count);
        }  
    }    
    return 0;
}