#include<stdio.h>
int main()
{
    int i,l,u;
    scanf("%d%d",&u,&l);
    for(i=1;i<=l;i++)
    {
        if(i*l%u==0)
        {
            printf("%d",i*l);
            break;
        }
    }
}