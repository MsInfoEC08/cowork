#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[100];
	gets(a);
	int i=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='z'&&a[i]!='Z'&&a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)printf("%c",a[i]+1);
		else if(a[i]=='z')printf("a");
		else if(a[i]=='Z')printf("A");
		else printf("%c",a[i]);
		
		
	}
	return 0;
}
