#include <stdio.h>
void main() 
{
int n,i,a=1,b=1,c;
printf("Enter the limt of fibonaci series:");
scanf("%d",&n);
printf("%d\t%d",a,b);
for(i=1;i<n-1;i++)
{
c=a+b;
printf("\t%d",c);
a=b;
b=c;
}
return 0;
}
