void showMatrix( int n)
{
	int x=1;
	int a[1000]={0}; 
	int i=0,j = n / 2;
	while(x<=n*n)
	{
		a[i*n+j]=x;
		x++;
		i=(i+n-1)%n;
		j=(j+n+1)%n;
		if(a[i * n + j]!=0) {i = (i + 2) % n;j=(j+n-1)%n; 
}
	}	for(i = 0; i < n; i++) 
	{
		for(j = 0; j < n; j++)//内层循环 控制输出某一行的col列 
			printf("%d ", a[i * n + j]);//x[i][j]将二维下标转化为一维下标i * col + j
		printf("\n"); 
	} 
} 
int main()
{
	int n;
	scanf("%d",&n);
	showMatrix(n);
	return 0;
}
