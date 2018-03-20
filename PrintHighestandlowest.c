#include<stdio.h>
void main()
{
int n,a[n],i,j,b,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[j]<b)
        b=a[j];
    }
}
printf("%d\t",b);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[j]>c)
        c=a[j];
    }
}
printf("%d",c);

}
