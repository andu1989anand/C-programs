#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a,n,i;

printf("enter no. of elements\n");
scanf("%d",&n);

a=(int*)calloc(n,sizeof(int));

printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("elements are\n");
for(i=0;i<n;i++)
printf("%d\n",*(a+i));
}
/*
enter no. of elements
3
enter the elements
9
8
7
elements are
9
8
7
*/
