#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a,n,i;
int arr[50];

printf("enter no. of elements\n");
scanf("%d",&n);

a=(int*)malloc(n * sizeof(int));

printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("enter elements\n");
for(i=0;i<n;i++)
printf("%d\n",*(a+i));

}
/*
OUTPUT:
enter no. of elements
3
enter elements
1
2
3
enter elements
1
2
3
*/
