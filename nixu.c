#include<stdio.h>
#include<string.h>



void ni_( char b)
{
	int i,c,d;
	c = strlen(b);
	for( i = 0; i < c ; i++)
	{
		printf("%c",b[i]);
//		d = i;
//		break;
	}
//		return d;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int i,c;
	char a[200]={0};
	gets(a);
	c = strlen(a);
	for( i = c - 1; i >= 0 ; i--)
	{
		printf("%c",a[i]);
	}
	 return 0;
} 


