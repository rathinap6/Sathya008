#include<stdio.h>
void main()
{
int n,a[n],i,b=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    b=b+a[i];
}
printf("%d",(b/n));
}
