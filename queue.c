#include<stdio.h>
#define max 5
char q[max];
int front=-1,rare=-1;

void insert()
{
char ele;
if((rare==(max-1)) || (front>rare))
{
printf("queue is full\n");
return;
}
getchar();
printf("enter an element to be inserted:");
scanf("%c",&ele);

if(front==-1)
front++;

rare++;
q[rare]=ele;

}

void delete()
{
char del;
if((front==-1) ||  (front>rare))
{
printf("queue is underflow\n");
return;
}

del=q[front];
front++;
printf("deleted element is: %c\n",del);

}

void display()
{
int i;
if((front==-1) ||  (front>rare))
{
printf("queue is empty\n");
return;
}
printf("\n\nqueue elements are\n\n");
for(i=front;i<=rare;i++)
printf("%c\t",q[i]);
}

void main()
{
int i,ch;
do{
printf("\n\n1.insert\n2. delete \n3. dispaly\n4.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
	break;

case 2: delete();
	break;

case 3: display();
	break;

case 4: exit(0);

default : printf("Enter correct choice\n");
}
}while(1);

}
