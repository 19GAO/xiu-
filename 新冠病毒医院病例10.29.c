#include<stdio.h>
int yisi(float i,int flage)//i表示温度，flage表示是否咳嗽。 
{
	if(i>=37.3&&flage==1)
	return 1;
	else
	return 0;
 } 
 int main()
 {
 	printf("请输入检查人数：");
    int m,n,c;//分别代表行数，人数，疑似病例。 
    float i;//表示温度。
	int x;//表示序号。 
	int flage;
		 	scanf("%d",&n);
		 	c=0;
			x=1;	 
	 for(m=1;m<=n;m++)
	 {
	 	printf("(%d)请输入检测的温度以及是否咳嗽：",x); 
	 	scanf("%f",&i);
	 	scanf("%d",&flage);
	 	x++;
	 	if(yisi(i,flage)==1)
	 	c++;
	 	 
	 }
	 printf("       疑似病例共%d人\n",c);


    return 0;
}