#include<stdio.h>
#include<stdlib.h>
void main()
{

int a[20][20],i,j,m,n,k;
int c=3,**s,size=0;
printf("enter m and n value:");
scanf("%d%d",&m,&n);
printf("enter a matrix elements:");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);

printf(" matrix elements:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",a[i][j]);
}
printf("\n");
}


for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
size++;
}
}


if(size>=(m*n)/2)
{
printf("it is not a sparse matrix\n");
exit(0);
}
s=(int*)malloc(size*sizeof(int));
for(i=0;i<size;i++)
s[i]=(int *)malloc(c * sizeof(int));

k=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
{
s[k][0]=i;
s[k][1]=j;
s[k][2]=a[i][j];
k++;
}
}
}

printf("sparse matrix is:\n");
for(i=0;i<size;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",s[i][j]);
}
printf("\n");
}
}


/*
OUTPUT:

enter m and n value:
8
8
enter a matrix elements:
0 0 0 0 0 0 0 0
1 2 3 4 5 6 7 8
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
9 8 7 6 5 4 3 2
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
 matrix elements:
0  0  0  0  0  0  0  0  
1  2  3  4  5  6  7  8  
0  0  0  0  0  0  0  0  
0  0  0  0  0  0  0  0  
0  0  0  0  0  0  0  0  
9  8  7  6  5  4  3  2  
0  0  0  0  0  0  0  0  
0  0  0  0  0  0  0  0  
k=16:
sparse matrix is:
1 0 1 
1 1 2 
1 2 3 
1 3 4 
1 4 5 
1 5 6 
1 6 7 
1 7 8 
5 0 9 
5 1 8 
5 2 7 
5 3 6 
5 4 5 
5 5 4 
5 6 3 
5 7 2 

*/
