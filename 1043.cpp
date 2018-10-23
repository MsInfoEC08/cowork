#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[100];
	char b[100];
	char c[100];
	gets(a);
	gets(b);
	gets(c);
	if(strcmp(a,b)>0&strcmp(a,c)>0)
	{
		if(strcmp(b,c)>0)
		printf("%s\n%s\n%s",c,b,a);
		else printf("%s\n%s\n%s",b,c,a);
	}
	if(strcmp(b,a)>0&strcmp(b,c)>0)
	{
		if(strcmp(a,c)>0)
		printf("%s\n%s\n%s",c,a,b);
		else printf("%s\n%s\n%s",a,c,b);
	}
	if(strcmp(c,b)>0&strcmp(c,a)>0)
	{
		if(strcmp(a,b)>0)
		printf("%s\n%s\n%s",b,a,c);
		else printf("%s\n%s\n%s",a,b,c);
	}
	return 0;
	
}
