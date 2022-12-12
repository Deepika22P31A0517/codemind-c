#include<stdio.h>
int main()
{
    int a,b,c,d,e,t;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    t=(a+b+c+d+e)/5;
    if(t>=90)
    {
        printf("Grade A");
    }
    else if(t>=80)
    {
        printf("Grade B");
    }
    else if(t>=70)
    {
        printf("Grade C");
    }
    else if(t>=60)
    {
        printf("Grade D");
    }
    else if(t>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}