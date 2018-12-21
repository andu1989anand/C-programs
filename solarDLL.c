#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 8
typedef struct planet
{
char planetname[20];
int distance;
int noofmoons;
struct planet *next;
struct planet *pre;
}SOLAR;

SOLAR *head=NULL,*tail=NULL;

int ch,c=0;

SOLAR * createplanet()
{
char pname[20];
int dist,moon;
printf("Front Insert\n");

SOLAR *newplanet=malloc(sizeof( SOLAR));

printf("enter planetname:");
scanf("%s",n);
printf("enter Planet distance from sun:");
scanf("%d",&dist);
printf("enter no of moons for planet:");
scanf("%d",&moon);

strcpy(newplanet->planetname,pname);
newplanet->distance=dist;
newplanet->noofmoons=moon;
return newplanet;
}

void deleteSOLAR(SOLAR *p)
{
printf("deleted record is:");
printf("planetname:%s\n",p->planetname);
printf("distance from sun:%d\n",p->distance);
printf("No of moons are:%d\n",p->noofmoons);
}

void finsert()
{

if(c==max)
printf("SOLAR system is full\n");

else
{
SOLAR *newplanet=NULL;
newplanet=createplanet();
if(c==0)
tail=newplanet;
else
{
head->pre=newplanet;
newplanet->next=head;
newplanet->pre=NULL;
}
head=newplanet;
c++;
}
}

void fdelete()
{
if(c==0)
printf("SOLAR system is empty\n");
else
{
printf("Front Delete\n");
SOLAR *t;
t=head;
deleteSOLAR(t);

if(c==1)
head=tail=NULL;
else
{
head=head->next;
head->pre=NULL;
}
free(t);
c--;
}
}

void rinsert()
{
if(c==max)
printf("SOLAR systme is full\n");
else
{
SOLAR *newplanet=NULL;
newplanet=createplanet();

if(c==0)
head=newplanet;

else
{
tail->next=newplanet;
newplanet->pre=tail;
newplanet->next=NULL;
}

tail=newplanet;
c++;
}
}

void rdelete()
{
if(c==0)
printf("SOLAR system is empty\n");
else
{
printf("Rear Delete\n");
 SOLAR *t;
t=tail;
deleteSOLAR(t);
if(c==1)
head=tail=NULL;
else
{
tail=tail->pre;
tail->next=NULL;
}
free(t);
c--;
}
}


void display()
{
SOLAR * temp;
if(c==0)
{
printf("NO Planet records to display\n");
return;
}
temp=head;
printf("number of Planets are:%d\n",c);
printf("\tplanetname\t\t\tdistance\t\t NO_of_Moons\n");
while(temp!=NULL)
{
printf("%s\t",temp->planetname);
printf("%d\t",temp->distance);
printf("%s\n",temp->noofmoons);
temp=temp->next;
}
}

void Mindist()
{
int min,i=0;
SOLAR *temp,*minplanet;
min=head->distance;
temp=head;
while(i<max)
{
if(min>temp->distance)
{
min=temp->distance;
minplanet=temp;
temp=temp->next;
}
else
temp=temp->next;
i++;
}
printf("planet which has minimum distance from sun is %s",minplanet->planetname);
printf("distance is %d",minplanet->distance);
}


void create()
{
int n,i;
printf("enter how many planet records:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter SOLAR %d details:\n",i+1);
rinsert();
}
}
void main()
{
for(;;)
{
printf("\n1.create from rear\n2.finsert\n3.fdelete\n4.rinsert\n5.rdelete\n6.display\n7.minplanet\n8.exit\nenter your choice\n");
scanf("%d",&ch);
switch(ch)

{
case 1: create();
break;
case 2: finsert();
break;
case 3:fdelete();
break;
case 4: rinsert();
break;
case 5: rdelete();
break;
case 6: display();
break;
case 7: Mindist();
break;
case 8: exit(0);
default: printf("Invalid choice\n");
}
}
}
