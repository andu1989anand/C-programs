#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack
{
int data;
struct stack *next;
};
struct stack *top=NULL;

int ele,del,ch,c=0;
void push()
{

if(c==max)
printf("stack overflow\n");

else
{
printf("enter a element\n");
scanf("%d",&ele);
struct stack *newele=malloc(sizeof(struct stack));
newele->data=ele;
newele->next=top;
top=newele;
c++;
}
}

void pop()
{
if(top==NULL)
printf("stack UNDERFLOW\n");
else
{
struct stack * temp;
temp=top;
top=top->next;
printf("popped =%d",temp->data);
free(temp);
c--;
}
}

void display()
{
if(top==NULL)
{
printf("stack EMPTY\n");
return;
}
struct stack * temp;
temp=top;
printf("elements are:");
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}

}
void main()
{

for(;;)
{
printf("\n1.push\n2.pop\n3.display\n4.exit\nenter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop(); break;
case 3: display(); break;
case 4: exit(0);
}
}
}

/*1.push
2.pop
3.display
4.exit
enter your choice
1
enter a element
11

1.push
2.pop
3.display
4.exit
enter your choice
1
enter a element
22

1.push
2.pop
3.display
4.exit
enter your choice
1
enter a element
33

1.push
2.pop
3.display
4.exit
enter your choice
1
enter a element
44

1.push
2.pop
3.display
4.exit
enter your choice
1
enter a element
55

1.push
2.pop
3.display
4.exit
enter your choice
1
stack overflow

1.push
2.pop
3.display
4.exit
enter your choice
3
elements are:55	44	33	22	11	
1.push
2.pop
3.display
4.exit
enter your choice
2
popped =55
1.push
2.pop
3.display
4.exit
enter your choice
2
popped =44
1.push
2.pop
3.display
4.exit
enter your choice
2
popped =33
1.push
2.pop
3.display
4.exit
enter your choice
2
popped =22
1.push
2.pop
3.display
4.exit
enter your choice
2
popped =11
1.push
2.pop
3.display
4.exit
enter your choice
2
stack UNDERFLOW

1.push
2.pop
3.display
4.exit
enter your choice
3
stack EMPTY

1.push
2.pop
3.display
4.exit
enter your choice
3
stack EMPTY

1.push
2.pop
3.display
4.exit
enter your choice
/*
