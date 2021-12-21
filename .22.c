#include <stdio.h>
int  gl(int a,int b)
{
	return a>b;
}

int  gl2(int a,int b)
{
	return a<b;
}

void sort(int a[],int n,int* choose(int a,int b))
{
	int i, j;
	int t;
	for(i = 0;i<n-1;i++)
	{
		for(j = 0;j<n-i-1;j++)
		{
			if(choose(a[j],a[j+1]))
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
void show(int a[],int n)
{
	int i;
	for(i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	
	}
	printf("\n");
}

int main()
{
	int x[] = {14,28,29,98,28,34,57,2,3};
	show(x,9);
	sort(x,9,gl);
	show(x,9);
	sort(x,9,gl2);
	show(x,9);
	
	
	return 0;
}