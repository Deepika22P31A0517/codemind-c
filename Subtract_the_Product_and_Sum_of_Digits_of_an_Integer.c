#include<stdio.h>
int main()
{
    int n,p=1,s=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    printf("%d",p-s);
}