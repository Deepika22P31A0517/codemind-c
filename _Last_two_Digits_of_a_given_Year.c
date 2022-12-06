#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%100;
    if(b<=9){;
    printf("0");
    }
    printf("%d",b);
}