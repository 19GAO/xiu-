#include <stdio.h>
int  findc(char str[],char a[])
{
	int i;
	int j;
	int count = 0;
    for(i = 0;str[i]!='\0';i++)
    {
	    j = 0;
    	while(a[j] == str[i] && a[j] && str[i])
    	{
    		++i;
    		++j;
		}
		if(a[j]=='\0')
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int countc;
	char str[] = {"in tree tree the tree tree"};//要输入的母串
	char a[] = {"tree"};//需要查找的子串
	countc = findc(str,a);
	printf("%d",countc);
	return 0;
}