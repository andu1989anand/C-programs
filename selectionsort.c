#include<stdio.h>
void main()
{
int a[20],i,j,temp,n,min;
printf("enter n value:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}

printf("sorted arrary is:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
