#include <stdio.h>

int main()
{
    int type;
    scanf("%d", &type);
    switch (type)//only int 
    {
    case 1:
        printf("Good mornings");
        break;
    case 2:
        printf("Good Evening");
        break;
    case 3:
        printf("You look beautiful");
        break;
    default:
        printf("How are you?");
        break;
    }


    return 0;
}