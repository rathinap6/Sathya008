#include<stdio.h>
void main()
{
int n,i,c;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("%d",c);
}
