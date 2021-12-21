	int a,num;//定义一个变量和序号 
	printf("请输入一个数字："); 
	scanf ("%d",&a);
		do {
       	if(a % 2==0)//如果余数为零就继续循环 
	   {
	   	a = a / 2;
	   	printf("(%d):%d\n",num++,a);
			   }
		else{
			a = a * 3 + 1;
			printf("(%d):%d\n",num++,a);
		}	
	}
		while(a!=1);//不等于1的时候继续这个循环 ，注意这个whlie后面要加引号！ 
		return 0;
	}
	
	