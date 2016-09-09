#include <stdio.h>
#include <stdlib.h>
void merge(int left[],int ln,int right[],int rn,int a[],int n)
{
    int i=0 , j=0 , k=0;
    while(i < ln && j < rn)
    {
        if(left[i] <= right[j])
        {
            a[k] = left[i];
            i = i + 1;
            k = k + 1;
        }
        else
        {
            a[k] = right[j];
            j = j + 1;
            k = k + 1;
        }
    }
    while(i < ln)
    {
        a[k] = left[i];
        i = i + 1;
        k = k + 1;
    }
    while(j < rn)
    {
        a[k] = right[j];
        j = j + 1;
        k = k + 1;
    }
}
void mergesort(int a[],int n)
{
    if(n<2)
        return;
    int mid = n/2;
    int ln = mid;
    int rn = n-mid;
    int left[ln];
    int right[rn];
    int i;
    for(i = 0; i < mid ; i++)
    {
        left[i] = a[i];
    }
    for(i = mid; i < n ; i ++)
    {
        right[i - mid] = a[i];
    }
    mergesort(left,ln);
    mergesort(right,rn);
    merge(left,ln,right,rn,a,n);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i < n ; i ++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,n);
    for(i = 0; i < n ; i ++)
    {
        printf("%d ",a[i]);
    }
}
