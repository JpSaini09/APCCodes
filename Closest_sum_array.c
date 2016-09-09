#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void printClosest(int arr[], int n, int x)
{
    int res_l, res_r;
    int l = 0, r = n-1, diff = INT_MAX;
    while (r > l)
    {
       if (abs(arr[l] + arr[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - x);
       }
       if (arr[l] + arr[r] > x)
           r--;
       else
           l++;
    }
   printf(" The closest pair is %d and %d\n",arr[res_l],arr[res_r]);
}
int main()
{
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54;
    int n = sizeof(arr)/sizeof(arr[0]);
    printClosest(arr, n, x);
    return 0;
}
