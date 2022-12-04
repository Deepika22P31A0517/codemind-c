#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,pr,c;
    scanf("%f%f%f",&p,&r,&t);
    pr=pow(1+(r/100),t);
    c=p*(pr-1);
    printf("%.2f",c);
}