#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main()
{
	srand(time(0));
	int a1,a2;//表示骰子的数
	int b;//表示限制一共进行50盘
	int c;//表示限制一盘里面进行五局
	int num1,num2;//表示两个骰子分别的和 
	int victory1 = 0,victory2 = 0;//表示双方的比分
	for(b=1;b<=50;b++)
	{
	  num1 = num2 = 0;
	  for(c=1;c<=6;c++)
	  {
	  	num1 = num1 + rand()%6+1;
	  	num2 = num2 + rand()%6+1;
		  }
	  if(num1 > num2)
	    victory1++;
	  else if(num1 < num2)
	  	victory2++;
		  }
	  if(victory1>victory2)
	   {
	    printf("player1 win\n");}
	 else if(victory1<victory2)
	 { printf("player2 win\n");} 
	   else{ 
	   printf("平局"); 
	 }
	   
	   
	
	 
	
	
	
	return 0; 
 } 