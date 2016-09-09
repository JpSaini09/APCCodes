#include <stdio.h>
#include <stdlib.h>
void quicksrt(int *a, int f ,int l)
{
    int p;
    int i;
    int j;
    int t;
    if(f<l)
    {
        p = f;
        i = f;
        j = l;
        while(i < j)
        {
            while(a[i]<=a[p] && i<l)
                i++;
            while(a[j] > a[p])
                j--;
            if(i<j)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    t = a[p];
    a[p] = a[j];
    a[j] = t;
    quicksrt(a,f,j-1);
    quicksrt(a,j+1,l);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i = 0 ; i < n ; i ++)
    {
        scanf("%d",&a[i]);
    }
    quicksrt(a,0,n);
    for(i = 0; i < n; i++)
    {
        printf(" %d",a[i]);
    }
}
