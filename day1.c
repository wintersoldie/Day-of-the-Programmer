#include<stdio.h>
int main()
{
    int n,i,j,r[5]={0},max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            r[i-1]++;
        }
    }
    max=0;
   for(i=1;i<5;i++)
    {
        if(r[max]<r[i])
        {
            max=i;
        }
    }
    printf("%d",max+1);       
}
