#include<stdio.h>
int main()
{
    int n,s=0,d=1,r;
    scanf("%d",&n);
    for(;n>0;)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        d=d*r;
    }
    if(s==d)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}