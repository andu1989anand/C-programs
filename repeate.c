#include<stdio.h>
void main()
{
int a[20],n,i,s,j,min,e=0;
int pos[5]={9,9,9,9,9},k=0;
printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
s=a[i];
for(j=i+1;j<n;j++)
{
if(s==a[j])
{
pos[k]=j;
k++;
e=1;
break;
}
}
}
if(e==0)
{
printf("no repeating element");
exit(0);
}

min=pos[0];
for(i=1;i<5;i++)
{
if(pos[i]<min)
min=pos[i];
}
printf("%d repeats early at position %d\n",a[min],min+1);
}

/*
OUTPUT:
enter no. of elements
5
enter elements:
1
2
3
3
2
3 repeats early at position 4


enter no. of elements
5 
enter elements:
1
2
3
4
5
no repeating element

*/
