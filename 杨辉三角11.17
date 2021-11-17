#include <stdio.h>
#define n 10
int main()
{
	int y[n][n] = {1};//定义n行n列的二维数组 第1个元素初始化为1，其余元素为0
	int i, j;//循环控制变量
	for(i = 0; i < n; i++)
	{
		y[i][0] = 1;
		for(j = 1; j <= i; j++)
		{
			y[i][j] = y[i-1][j-1] + y[i-1][j];
		}
	} 
	
	for(i = 0; i < n; i++)//外层循环 控制输出n行 
	{
		for(j = 0; j <= i; j++)//内层循环 控制输出某一行的n列 
			printf("%4d", y[i][j]);
		printf("\n"); 
	}
	return 0; 
}