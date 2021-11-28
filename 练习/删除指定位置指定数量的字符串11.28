#include<stdio.h>
/*用来记录字符串长度*/ 
int length(char* a)
{
	int count;
	while(*a++ != 0)
	{
		count++;
		
	}
	return count;
	
 } 
 /*用来删除字符串*/
 void delate(char* a,int start,int len)
 {
 	int slengh = length(a);
 	int i = start - 1;
	while(i+len<slengh&&a[i+len]!=0)  
	{
		a[i] = a[i+len];
		i++;
	}
 	a[i] = 0;
 }
 
 int main()
 {
 	char a[50];
 	int start,len;
 	printf("请输入母串\n");
 	gets(a);
 	printf("从第几个开始删除： ");
 	scanf("%d",&start);
 	printf("删除几个： ");
 	scanf("%d",&len); 
 	delate(a,start,len);
 	printf("结果为：\n");
 	puts(a);
 	return 0;
 }