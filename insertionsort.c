#include<stdio.h>
void main()
{
int a[20],i,j,temp,n,min;
printf("\nINSERTION SORT\n:");
printf("enter n value:");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
temp=a[i];
j=i;

while(j>0&&temp<a[j-1])
{
a[j]=a[j-1];
j=j-1;
}
a[j]=temp;
}
printf("\nsorted arrary is:");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}

/*
OUTPUT:


INSERTION SORT
:enter n value:5
enter array elements:
5
8
2
44
9 

sorted arrary is:2
5
8
9
44
priyanand@priyanand ~/DS-PROGRAMS/MODULE-1 $ ./a.out

INSERTION SORT
:enter n value:5
enter array elements:
54
67
444
11
1

sorted arrary is:1
11
54
67
444
*/
