#include<stdio.h>
int main()
{
    int a,u=0;
    scanf("%d",&a);
    float sr,tb,bill;
    if(a<200)
    {
       bill=a*1.20; 
    }
    else if(a>200&&a<400)
    {
       bill=a*1.50;
    }
    else if(a>400&&a<600)
    {
        bill=a*1.80;
    }
    else
    {
        bill=a*2.00;
    }
    if(bill>400)
    {
        sr=bill*0.15;
        tb=bill+sr;
        printf("%.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%.2f",tb);
    }
}