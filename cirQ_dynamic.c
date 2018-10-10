#include<stdio.h>
#include<stdlib.h>
#define max 5
int * cq;
int f=-1,r=-1;
int ele,del,ch;
void insert()
{

if((f==0 && r==max-1)||(f==r+1))
printf("queue overflow\n");
else
{

printf("enter a element\n");
scanf("%d",&ele);

if(r==-1)
f=0;

r=(r+1)%max;
cq[r]=ele;
}
}

void delete()
{
if(f==-1)
printf("queue UNDERFLOW\n");

else
{
del=cq[f];
if(f==r)
f=r=-1;
printf("deleted element:%d\n",del);
f=(f+1)%max;
}
}

void display()
{
int i;
if(f==-1)
printf("queue UNDERFLOW\n");
else
{
i=f;
printf("elements are:\n");
for(;i!=r;i=(i+1)%max)
printf("%d-->%d\n",i,cq[i]);
printf("%d-->%d\n",i,cq[r]);
}

}

void main()
{
cq=malloc(max*sizeof(int));
for(;;)
{
printf("\n1.insert\n2.delete\n3.display\n4.exit\nenter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();break;
case 2: delete(); break;
case 3: display(); break;
case 4: exit(0);
}
}
}
