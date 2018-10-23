#include <stdio.h>
 int main()
 {
int m, n, a, b;
 scanf ("%d %d",&m,&n);
 b=m*n;
 while (n!=0)
 {
    a=m%n;
    m=n;
    n=a;}
    printf ("%d\n",m);
    printf ("%d\n",b/m);
    return 0;
    
 
 
 	
 }
