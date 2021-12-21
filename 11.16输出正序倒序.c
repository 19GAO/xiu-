#include<stdio.h>
#include<stdlib.h>
int* createArray(int a[],int n)
{
	int i;
	int*b= (int*)malloc(n*sizeof(int));
	for(i = 0;i<n;i++)
	{
		a[i] = rand()%100+1;
	}
	return b;
}

void showArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

void qSortAsc(int a[],int n)
{
	int* p = a;
	int* q = a +n -1;
	int t = *p;
	while(p<q)
	{
		while(p<q&&*p>=t)
		{
			q--;
		}
		if(p<q)
		{
			*p = *q;
			p++;
		}
	}
	
	while(p<q)
	{
		while(p<q&&*p<=t)
		{
			p++;
		}
		if(p<q)
		{
			*q = *p;
			q--;
	}
	qSortAsc(a,p-a);
}
}

void qSortDesc(int a[],int n)
{
	int* p = a;
	int* q = a +n -1;
	int t = *p;
	while(p<q)
	{
		while (p<q&&*q<=t)
		{
			q--;
		}
		if(p<q)
		{
			*p = *q;
			p++;
		}

    }
}
	while(p<q)
	{
		while(p<q&&*p>=t)
		{
			p++;
		}
		if(p<q)
		{
			*q = *p;
			q--;
	    }
	qSortDsc(p+1,n-(q-a)-1);
    } 
int main()
{
	int a[20];
	createArray(a,20);
	showArray(a,20);
	qSortAsc(a,20);
	qSortDesc(a,20);
	showArray(a,20);
	return 0;
	free(b);
} 