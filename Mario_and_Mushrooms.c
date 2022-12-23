#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0)
    printf("NORMAL");
    if(a%3==1)
    printf("HUGE");
    if(a%3==2)
    printf("SMALL");
}