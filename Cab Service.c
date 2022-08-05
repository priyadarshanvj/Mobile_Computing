#include<stdio.h>
int main()
{
    int n,r1,r2;
    scanf("%d",&n);
    int a[n],i,t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&r1);
    scanf("%d",&r2);
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            t=-a[i];
        else
            t=a[i];
        if(t>=r1 && t<=r2)
            printf("%d ",a[i]);
    }
    return 0;
}