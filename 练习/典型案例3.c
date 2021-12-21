 int main()
 {
 	int n;
 	char a[100]="woshihihsow";
    n=cha(a);
if(n==0)
printf("yes");
else
printf("no");
     return 0;
}
#include<stdio.h>
#include<string.h>
void cha(char a[],int n,char b[])
{
	    char c[100];
	 	strncpy(c,a,n);
printf("%s\n",c);
	 	int h=strlen(b);
	 	printf("%d\n",h);
	 	int i=0;
	 	for(i=0;i<h;i++)
	 	{
		 c[n+i]=b[i];
		}
		c[n+h]=0;
		strcat(c,(a+n));
		
	 	strcpy(a,c);
}