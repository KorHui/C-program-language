#include <stdio.h>

int max(int a[], int len);
int swap(int a[], int len, int maxid);

int main()
{
    int maxid;
    int a[] = {2,3,56,4,78,54,24,54,87,99,21,100,35,67,23,31,47};
    int len = sizeof(a)/sizeof(a[0]);
    for (int i = len; i >0; i--)
    {
        maxid = max(a,i);
        swap(a, i, maxid);
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }   

    return 0;
}

int max(int a[], int len)
{
    int maxid = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]>a[maxid])
        {
            maxid = i;
        }
    }
    return maxid; 
}

int swap(int a[], int len, int maxid)
{
    int t = a[len-1];
    a[len-1] = a[maxid];
    a[maxid] = t;
    return 0;
}