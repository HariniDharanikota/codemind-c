#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,km;
    scanf("%d%d%d",&n,&m,&k);
    km=m*k;
    if(n%km==0)
    printf("%d",n/km);
    else
    printf("%d",n/km+1);
}