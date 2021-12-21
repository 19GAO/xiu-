#include<stdio.h>
int main()
{
	int a[50]; 
	int i;//表示循环变量 。 
	int n;//表示数据的个数 。 
	int max,min;//表示最大值和最小值。
	int state1,state2;
	printf("请输入数据的个数：\n");
	scanf("%d",&n);
	 min= a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min = a[i];
			state1 = i + 1;
		}
	}
      max = a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max = a[i];
			state2 = i + 1;
		}
	}
	printf("最大值为%d位置为%d\n",max,state2);
	printf("最小值为%d位置为%d\n",min,state1);

	
	
	return 0;
 } 