#include<stdio.h>

int main()
{
    int a=2,b=4,c=6,d=8, x;
    float average;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    average=(a+b+c+d)/4.0;
    x=a+b+c+d;
    printf("average is %.1f""x=%d",average ,x);
    return 0;
}