/*Design, Develop and Implement a Program in C for the following operations on Singly Circular
Linked List (SCLL) with header POLYs
a. Represent and Evaluate a Polynomial P(x,y,z) = 6x2y2z-4yz5+3x3yz+2xy5z-2xyz3
b. Find the sum of two polynomials POLY1(x,y,z) and POLY2(x,y,z) and store the result in POLYSUM(x,y,z)
Support the program with appropriate functions for each of the above operations
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max 5
typedef struct polynomial
{
int coff,px,py,pz;
struct polynomial *next;
}POLY;


int nterm=0;


POLY* rinsert(int cf,int x,int y,int z,POLY * head)
{
POLY *cur;

POLY * newterm=malloc(sizeof(POLY));
newterm->coff=cf;
newterm->px=x;
newterm->py=y;
newterm->pz=z;

cur=head->next;
while(cur->next!=head)
cur=cur->next;

cur->next=newterm;
newterm->next=head;
printf("newterm->px=%d,newterm->py=%d,newterm->pz=%d,coff=%d\n",newterm->px,newterm->py,newterm->pz,newterm->coff);
return head;
}


POLY* read_poly(POLY *head)
{
int x,y,z,cf,i;
printf("\nEnter no. of terms in polynomial: ");
scanf("%d",&nterm);
for(i=0;i<nterm;i++)
{
printf("\nEnter cof,x, y, z powers(0-indiacate NO term): ");
scanf("%d%d%d%d",&cf,&x,&y,&z);
head=rinsert(cf,x,y,z,head);
}
return head;
}



void display(POLY *head)
{
int c=0;
POLY *temp;


if(head->next==head)
{
printf("Polynomial does not exist\n"); 
return;
}

temp=head->next;

printf("\nPolynomial is:\n");
while(c<nterm)
{
printf("%d x^%d y^%d z^%d",temp->coff,temp->px,temp->py,temp->pz);
if(temp->next != head)
printf(" + ");
temp=temp->next;
c++;
}
printf("\n");
}

void evaluate(POLY *h1)
{
POLY *temp; 
int x=0, y=0, z=0,c=0;
float result=0;
temp=h1->next;
printf("\nEnter x, y, z, terms to evaluate:\n");
scanf("%d%d%d", &x, &y, &z);

while(c<nterm)
{
result = result + (temp->coff * pow(x,temp->px) * pow(y,temp->py) * pow(z,temp->pz));
temp=temp->next;
c++;
}
printf("\nPolynomial result is: %f", result);
}

void main()
{
int ch;
POLY *h1;
h1->next=h1;

for(;;)
{
printf("\n1.Evaluate poly\n2.exit\nenter your choice\n");
scanf("%d",&ch);
switch(ch)

{
case 1: 
printf("\nEnter polynomial to evaluate:\n");
h1=read_poly(h1);
display(h1);
evaluate(h1);
break;


case 2: exit(0);
default: printf("Invalid choice\n");
}
}
}
