#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float d,h,g;
    if(a<=10000)
    {
       d=a*0.8;
       h=a*0.2;
       g=a+d+h;
    }
    else if(a<=20000)
    {
        d=a*0.9;
        h=a*0.25;
        g=a+d+h;
    }
    else
    {
        d=a*0.95;
        h=a*0.30;
        g=a+d+h;
    }
    printf("%.2f",g);
}