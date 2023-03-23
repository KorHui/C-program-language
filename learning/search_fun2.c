#include <stdio.h>

int search(int key, int a[], int len);

int main()
{
    int k, r;
    int a[] = {1,3,5,6,8,9,12,14,15,17,18,25,36,48,50};
    scanf("%d", &k);
    r = search(k, a, sizeof(a)/sizeof(a[0]));
    printf("%d", r);
    return 0;
}

int search(int key, int a[], int len)
{
    int ret=-1;
    int left=0,right=len-1,mid=(left+right)/2;
    while (left <= right)
    {
        if (a[mid]==key)
        {
            ret = mid;
            break;
        }
        else if (a[mid]<key)
        {
            left = mid+1;
            mid=(left+right)/2;
        }
        else
        {
            right = mid-1;
            mid=(left+right)/2;
        }  
    }
    return ret;
}