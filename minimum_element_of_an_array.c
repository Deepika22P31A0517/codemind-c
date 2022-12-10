#include<stdio.h>
int main()
{
    int n,i,a[i],min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[0];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("%d",min);
}