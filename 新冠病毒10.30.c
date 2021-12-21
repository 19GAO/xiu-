#include<stdio.h>
int yisi(int i,int cough)
{
	if(i>=37.3&&cough==1)
	return 1;
	else
	return 0;
	
	
 } 
 int main()
 {
 	int n,m,cough;//n表示人数，m表示行数。
	float i;
	int x;//表示得病人数
	scanf("%d",&n);
		
	for(m=1;m<=n;m++)
{
	scanf("%d",&cough);
	scanf("%f",&i);
	if (yisi(i,cough)==1)
	x++; 	
	 } 
	printf("有%d个有病\n",x);
 	return 0;
 }