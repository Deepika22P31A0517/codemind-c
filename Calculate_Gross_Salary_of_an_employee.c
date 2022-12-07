#include<stdio.h>
int main()
{
    float b,d,h,p,g;
    scanf("%f%f%f",&b,&d,&h);
    p=(b*12/100);
    g=b+d+h+p;
    printf("%.2f
%.2f",p,g);
}