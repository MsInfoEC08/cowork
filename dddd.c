#include<stdio.h>

void main()
{
	int i,x,j;
	int a[9];
	for( i =0 ; i < 9; i++)
	{
		scanf("%d",&a[i]);
	} 
	 i = 0;
	 scanf("%d",&x); //²åÈëµÄÊý 
	 while( x > a[i])
	 {
	 	i++;
	  } 
	  for(j = 0; j < i ; j++)
	  {
	  	printf("%d\n",a[j]);
	  	
	  }
	  printf("%d",x);
	  for(i ; i < 9 ; i++)
	  {
	  	printf("%d",a[i]);
	  }
 } 
