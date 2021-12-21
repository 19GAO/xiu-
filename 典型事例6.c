#include <stdlib.h>
#include <time.h>
int main()
{
	int i;
	int a[5000];
	FILE* lg = fopen("dongshiruder.txt","wb");
	srand(time(0));
      for(i = 0;i<10;i++)
      {
      	a[i] = rand();
	  }
	  fwrite(a,sizeof(int),10,lg);
	  fclose(lg);
	FILE* lg2 = fopen("dongshiruder.txt","rb");
	char c[10];
	  fseek(lg2,3,SEEK_SET);
	  fscanf(lg2,"%c ",&c);
	  printf("%c",c[0]);
	  rewind(lg2);
	  fseek(lg2,7,SEEK_SET);
	  fscanf(lg2,"%c",&c+1);
	  printf("%c",c[1]);
	  fclose(lg2);
	return 0;
}