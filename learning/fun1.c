#include <stdio.h>

int search(int key, int a[], int len);

int main()
{
    int a[] = {1,3,2,5,12,24,14,6,9,16};
    int r = search(11, a, sizeof(a)/sizeof(a[0]));
    printf("%d", r);
    return 0;
}//sizeof(a)：整个数组的大小；sizeof(a[0])：数组中第一个元素的大小。

int search(int key, int a[], int len)
{
    int ret = -1;
    for ( int i = 0; i < len; i++)
    {
        if (a[i]==key)
        {
            ret = i;
        }
    }
    
    return ret;
}
//存在表达返回结果的变量，单一出口