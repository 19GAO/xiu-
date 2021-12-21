char* mystrncat(char* dest, const char* src, int n)
{
	int i = 0;
	int len = strlen(dest);
	while(src[i] && i < n)
	{
		dest[len + i] = src[i];
		++i;
	}
	dest[len + i] = 0;
	return dest; 
}
int main()
{
	char dest[10] = "Hello ";
	char* src = "world";
	puts(dest);
	puts(src);
	puts("---------------");
	mystrncat(dest, src, 3);
	puts(dest);
	puts(src);
	return 0;
}