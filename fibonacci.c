#include<stdio.h>
int fib(int n)
{
if (n<=1)
return n;
else
return fib(n-1)+fib(n-2);
}


void main()
{
int num,res,i;
printf("enter the number:");
scanf("%d",&num);
for(i=0;i<=num;i++)
printf("fib(%d)=%d\n",i,fib(i));
}
