#include<stdio.h>
#include<string.h>
int cha(char a[])
{
     char c[100];
  //  char d[100];
    int h=0;
    int n=strlen(a);
    //printf("%d\n",n);
	    strncpy(c,a,n/2);
     strrev(c);
     if(n%2==0)
    {
     h=strcmp(c,a+n/2);
     //printf("%d",h);
    }
    else
    {
    h=strcmp(c,a+(n/2+1));
    }
    return h;
}