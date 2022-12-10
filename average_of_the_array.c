#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[i],sum=0,c;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    c=sum/n;
    printf("%.2f",c);
}