#include <stdio.h>
#include <stdlib.h>
int gcd(int n1,int n2)
{
    if(n1%n2==0)
      return n2;
    gcd(n2,n1%n2);
}
int main()
{
    int n1,n2,res;
    printf("Enter no to find GCD\n");
    scanf("%d%d",&n1,&n2);
    res = gcd(n1,n2);
    printf("Result: %d\n",res);
    return 0;
}
