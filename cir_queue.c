#include <stdio.h>

#define MAX 5

int cq[MAX];
int front = -1, rear =-1;

int isFull()
{
    if( (front == rear + 1) || (front == 0 && rear == MAX-1)) 
	return 1;
    return 0;
}

int isEmpty()
{
    if(front == -1) 
	return 1;
    return 0;
}

void insert(char element)
{
    if(isFull()) 
	printf("\n Circular Queue is full!! \n");
    else
    {
        if(front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cq[rear] = element;
        printf("\n Inserted -> %c", element);
    }
}


void delete()
{
    char del;
    if(isEmpty()) {
        printf("\n Circular Queue is empty !! \n");
    } 
else {
        del = cq[front];
        if (front == rear)
	{
            front = -1;
            rear = -1;
        } /* Q has only one element, so we reset the queue after dequeing it. ? */
        else {
            front = (front + 1) % MAX;
            
        }
        printf("\n Deleted element -> %c \n", del);
        
    }
}

void display()
{
    int i;
    if(isEmpty()) printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ",front);
        printf("\n CIRCULAR QUEUE -> ");
        for( i = front; i!=rear; i=(i+1)%MAX) {
            printf("%c ",cq[i]);
        }
        printf("%c ",cq[i]);
        printf("\n Rear -> %d \n",rear);
    }
}

void main()
{
    int i,ch;
char ele;
do{
printf("\n1.insert\n2.delete \n3.dispaly\n4.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: getchar();
	printf("enter an element to be inserted:");
	scanf("%c",&ele);
	insert(ele);
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
