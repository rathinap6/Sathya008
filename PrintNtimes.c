#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int n,i;
printf("Enter the String:");
gets(a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",a);
}
}
