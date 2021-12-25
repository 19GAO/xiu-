/*编写一个函数，函数原型为void processArray(int* p, int n)；
，功能为将数组中最小的数与第一个数对换，最大的数与最后一个数对换，
在main函数中通过malloc函数创建数组，调用processArray函数对数组进行处理，并输出处理后的数组，输出时每个数据用空格隔开，
最后一个数据后面没有空格，最后用free释放数组。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void processArray(int* p,int n)
{
	int min = p[0];
	int max = p[n-1];
	int j = 1;
	int i = n-2;
     while(*p)
	{
		if(p[j]<min)
		{
			int t = p[0];
			p[0] = p[j];
			p[j] = t;
			j++;
		}
		else
			j++;
    }     
     while(*p && i>0)
	   {
	     if(p[i]>max)
		 {
			int x = p[i];
		    p[i] = p[n-1];
		    p[n-1] = x;
			i--;
		 }
		 else
		    i--;
	   	
	   }
}
int main()
{
	int i;
	int n;
	int count = 0;
	scanf("%d\n",&n);
	int *a;
	 a = (int*)malloc(n * sizeof(int));
	for(i = 0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	processArray(a,n);
	while(count!=0)
	{
	   for(i = 0;i<n;i++)
	  {
		printf("%d ",a[i]);
	  }
		count++;
	}
	free(a);
	return 0;
}