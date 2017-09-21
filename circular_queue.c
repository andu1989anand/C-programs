#include<stdio.h>
#define max 5
char q[max];
int front=-1,rear=-1;

void insert()
{
char ele;
if(((rear==(max-1)) && (front==0))||(rear==front-1))
{
printf("queue is full\n");
return;
}

else
{
	getchar();
	printf("enter an element to be inserted:");
	scanf("%c",&ele);

if(front==-1)
{
front=rear=0;	
q[rear]=ele;
}

else if (rear == max-1 && front != 0)
    {
        rear = 0;
        q[rear] = ele;
    }

else
    {
        rear++;
        q[rear] = ele;
    }
 
}
}
void delete()
{
char del;
if(front==-1)
{
printf("queue is underflow\n");
return;
}
del=q[front];

if (front == rear)
    {
        front = -1;
        rear = -1;
    }
else if (front == max-1)
        front = 0;
else
        front++;

printf("deleted element is: %c\n",del);

}

void display()
{
int i;
if(front==-1)
{
printf("queue is empty\n");
return;
}
printf("\n\nqueue elements are\n\n");
if(rear>front)
{
for(i=front;i<=rear;i++)
printf("%c\t",q[i]);
}
else
    {
        for (i = front; i < max; i++)
            printf("%c\t", q[i]);
 
        for (i = 0; i <= rear; i++)
            printf("%c\t", q[i]);
    }

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
case 1: 
	insert();
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
