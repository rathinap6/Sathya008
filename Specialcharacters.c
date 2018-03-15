#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int b,l,c=0,i;
    printf("Enter the String:");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
     {
        if(a[i]>='A'&&a[i]<='z'||a[i]==' '||a[i]=='.')
        b++;
        else
        c++;
    }
    printf("%d",c);
}
