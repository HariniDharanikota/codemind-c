#include<stdio.h>
int main()
{
    float basic,hra,da,ta,pf,gross;
    scanf("%f%f%f",&basic,&hra,&da);
    pf=(basic*12)/100;
    gross=basic+da+hra+pf;
    pf=0.12*basic;
    printf("%0.2f
%0.2f",pf,gross);
}