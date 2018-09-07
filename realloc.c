#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a,n,i,en,*newa;
printf("enter no. of elements\n");
scanf("%d",&n);
a=(int*)calloc(n,sizeof(int));
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
printf("elements\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(a+i));
}
printf("enter how many extra no. of elements\n");
scanf("%d",&en);
a=(int*)realloc(a,en*sizeof(int));
if(a==NULL)
{
printf("memory is cleaned");
exit(0);
}
printf("enter elements\n");
for(i=n;i<n+en;i++)
{
scanf("%d",a+i);
}
printf("elements\n");
for(i=0;i<n+en;i++)
{
printf("%d\n",*(a+i));
}
}

/*
enter no. of elements
3
enter elements
1
2
3
elements
1
2
3
enter how many extra no. of elements
6
enter elements
9
8
7
6
5
4
elements
1
2
3
9
8
7
6
5
4
*/
