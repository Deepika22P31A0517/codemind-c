#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float area,per;
    area=3.14*a*a;
    per=2*3.14*a;
    printf("%.2f
%.2f",area,per);
}