#include <stdio.h>

int search(int key, int a[], int len);

int main()
{
    int a[] = {1,3,2,5,12,24,14,6,9,16};
    int r = search(11, a, sizeof(a)/sizeof(a[0]));
    printf("%d", r);
    return 0;
}//sizeof(a)����������Ĵ�С��sizeof(a[0])�������е�һ��Ԫ�صĴ�С��

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
//���ڱ�ﷵ�ؽ���ı�������һ����