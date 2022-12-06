#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    float s,v;
    s=6*pow(a,2);
    v=pow(a,3);
    printf("Surface area = %.2f and Volume = %.2f",s,v);
}