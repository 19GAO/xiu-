#include<stdio.h>
int main()
{
	int a[5][5] = {0};
	int x = 1;
	int n = 5;
	int i = 0,j = n / 2;
	while(x<=25)
	{
	  	a[i][j] = x;
	  	x++;
	  	i = (i+n-1)%n;
	  	j = (j+1)%n;
	  	if(a[i][j]!=0)
	   {
	   i = (i + 2) % n;
	   j = (j+n-1)%n;
	   
	   }
    }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	
		
			printf("%3d",a[i][j]);
				printf("\n");
		
	
	}

	return 0;
 } 