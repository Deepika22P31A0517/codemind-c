#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r;
    scanf("%d%d",&n,&r);
    float k,s=0;
    for(i=n;i<=r;i++)
    {
        k=sqrt(i);
        s=s+k;
    }
    printf("%.2f",s);
}