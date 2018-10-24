#include<stdio.h>
int kongge(int x);
int main()
{
	int a;
	scanf("%d", &a);
	kongge(a);
}
int kongge(int x)
{
	int a, b, c, d;
	a = x / 1000;
	b = (x % 1000) / 100;
	c = (x % 100) / 10;
	d = x % 10;
	printf("%d %d %d %d\n",a, b, c, d);
}
