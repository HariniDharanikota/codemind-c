#include<stdio.h>
int main()
{
    int i,n;
    float avg,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.2f",avg);
    
}