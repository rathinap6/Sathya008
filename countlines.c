#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int l,c=0,i;
    printf("Enter the String:");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
     {
        if(a[i]=='.')
        c=c+1;
    }
    printf("%d",c);
}
