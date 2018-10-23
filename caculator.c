#include<stdio.h>
#include<math.h>
int main(int argc,char *argv[])

{
  int a,b,c,err;

 char op;

do

{scanf("%d%c%d",&a,&op,&b);

err=0;

if(a==0&&b==0)break;

if(op=='+')c=a+b;

if(op=='-')c=a-b;

if(op=='*')c=a*b;

if(op=='/')

if(b)c=a/b;else err=1;

if(op=='%')

if(b)c=a%b;else err=1;

if(err)printf("%d%c%d error!\n",a,b,c);

else printf("%d%c%d=%d\n",a,op,b,c);  

}while(1);

return 0;

}
	

