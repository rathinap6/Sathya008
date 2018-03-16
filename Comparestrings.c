#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int n,i,l1,l2;
printf("Enter the String 1:");
gets(a);
printf("Enter the String 2:");
gets(b);
l1=strlen(a);
l2=strlen(b);
if(a==b)
{
    printf("%s",a);
}
else if(a>b)
{
    printf("%s",a);
}
else if(b>a)
{
    printf("%s",b);
}
}
