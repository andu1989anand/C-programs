#include<stdio.h>
struct node
{
int data;
struct node * next;
struct node * pre;
};

void main()
{
struct node n1;

n1.next=NULL;
n1.pre=NULL;
n1.data=100;

struct node n2;

n2.next=NULL;
n2.pre=NULL;
n2.data=200;

struct node n3;

n3.next=NULL;
n3.pre=NULL;
n3.data=200;

n1.next=&n2;
n2.next=&n3;

n2.pre=&n1;
n3.pre=&n2;

printf("n1,n2,n3  info via n1\n");
printf("n1=%d\n",n1.data);
printf("n2=%d\n",n1.next->data);
printf("n3=%d\n",n1.next->next->data);

printf("n1,n2,n3  info via n2\n");
printf("n1=%d\n",n2.pre->data);
printf("n2=%d\n",n2.data);
printf("n2=%d\n",n2.next->data);

printf("n1,n2,n3  info via n3\n");
printf("n1=%d\n",n3.pre->pre->data);
printf("n2=%d\n",n3.pre->data);
printf("n2=%d\n",n3.data);

}


/*

n1,n2,n3  info via n1
n1=100
n2=200
n3=200
n1,n2,n3  info via n2
n1=100
n2=200
n2=200
n1,n2,n3  info via n3
n1=100
n2=200
n2=200


*/
