#include <stdio.h>
int main()
{
    int utc = 0, bjt = 0;
    scanf("%d", &utc);
    bjt = utc - 800;
    if (bjt<0)
    {
        bjt = bjt + 2400;
    }

    printf("%02d%02d", bjt/100, bjt%100);
    return 0;
}