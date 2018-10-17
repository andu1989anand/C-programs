/*8. Design, Develop and Implement a menu driven Program in C for the following operations on
Doubly Linked List (DLL) of Employee Data with the fields: SSN, Name, Dept, Designation, Sal,
PhNo.
a. Create a DLL of N Employees Data by using end insertion.
b. Display the status of DLL and count the number of nodes in it
c. Perform Insertion and Deletion at End of DLL
d. Perform Insertion and Deletion at Front of DLL
e. Demonstrate how this DLL can be used as Double Ended Queue
f. Exit
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 5
struct student
{
char ssn[20],name[20],dept[10],phno[15];
int sal;
struct student *next;
struct student *pre;
};
struct student *head=NULL,*tail=NULL;

int ch,c=0;

void finsert()
{
char u[20],n[20],b[10],p[20];
int s;
if(c==max)
printf("student record full\n");

else
{
printf("Front Insert\n");
struct student *newstu=malloc(sizeof( struct student));
printf("enter student ssn:");
scanf("%s",u);
printf("enter student name:");
scanf("%s",n);
printf("enter student dept:");
scanf("%s",b);
printf("enter student sal:");
scanf("%d",&s);
printf("enter student phno:");
scanf("%s",p);
strcpy(newstu->ssn,u);
strcpy(newstu->name,n);
strcpy(newstu->dept,b);
newstu->sal=s;
strcpy(newstu->phno,p);

if(c==0)
tail=newstu;
else
{
head->pre=newstu;
newstu->next=head;
newstu->pre=NULL;
}
head=newstu;
c++;
}
}

void fdelete()
{
if(c==0)
printf("student record empty\n");
else
{
printf("Front Delete\n");
struct student *temp;
temp=head;
printf("deleted student record is:");
printf("ssn:%s\n",temp->ssn);
printf("name:%s\n",temp->name);
printf("dept:%s\n",temp->dept);
printf("sal:%d\n",temp->sal);
printf("phno:%s\n",temp->phno);
if(c==1)
head=tail=NULL;
else
{
head=head->next;
head->pre=NULL;
}
free(temp);
c--;
}
}

void rinsert()
{
char u[20],n[20],b[10],p[20];
int s;
if(c==max)
printf("student record full\n");
else
{
printf("Rear Insert\n");
struct student *newstu=malloc(sizeof(struct student));
printf("enter student ssn:");
scanf("%s",u);
printf("enter student name:");
scanf("%s",n);
printf("enter student dept:");
scanf("%s",b);
printf("enter student sal:");
scanf("%d",&s);
printf("enter student phno:");
scanf("%s",p);
strcpy(newstu->ssn,u);
strcpy(newstu->name,n);
strcpy(newstu->dept,b);
newstu->sal=s;
strcpy(newstu->phno,p);

if(c==0)
head=newstu;
else
{
tail->next=newstu;
newstu->pre=tail;
newstu->next=NULL;
}
tail=newstu;
c++;

}
}

void rdelete()
{
if(c==0)
printf("student record empty\n");
else
{
printf("Rear Delete\n");
 struct student *temp;
temp=tail;
printf("deleted student record is:\n");
printf("ssn:%s\n",temp->ssn);
printf("name:%s\n",temp->name);
printf("dept:%s\n",temp->dept);
printf("sal:%d\n",temp->sal);
printf("phno:%s\n",temp->phno);
if(c==1)
head=tail=NULL;
else
{
tail=tail->pre;
tail->next=NULL;
}
free(temp);
c--;
}
}


void display()
{
struct student * temp;
if(c==0)
{
printf("NO studentrecord to display\n");
return;
}
temp=head;
printf("number of student records are:%d\n",c);
printf("ssn\tname\tdept\tsal\tphno\n");
while(temp!=NULL)
{
printf("%s\t",temp->ssn);
printf("%s\t",temp->name);
printf("%s\t",temp->dept);
printf("%d\t",temp->sal);
printf("%s\n",temp->phno);
temp=temp->next;
}
}

void create()
{
int n,i;
printf("enter how many students records:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter student %d details:\n",i+1);
rinsert();
}
}
void main()
{
for(;;)
{
printf("\n1.create from rear\n2.finsert\n3.fdelete\n4.rinsert\n5.rdelete\n6.display\n7.exit\nenter your choice\n");
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
case 7: exit(0);
default: printf("Invalid choice\n");
}
}
}


/*OUTPUT

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
1
enter how many students records:
1
enter student 1 details:
Rear Insert
enter student ssn:1
enter student name:1
enter student dept:1
enter student sal:1
enter student phno:1

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:1
ssn	name	dept	sal	phno
1	1	1	1	1

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
2
Front Insert
enter student ssn:2
enter student name:2
enter student dept:2
enter student sal:2
enter student phno:2

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:2
ssn	name	dept	sal	phno
2	2	2	2	2
1	1	1	1	1

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
4
Rear Insert
enter student ssn:4
enter student name:4
enter student dept:4
enter student sal:4
enter student phno:4

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:3
ssn	name	dept	sal	phno
2	2	2	2	2
1	1	1	1	1
4	4	4	4	4

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
4
Rear Insert
enter student ssn:6
enter student name:6
enter student dept:6
enter student sal:6
enter student phno:6

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:4
ssn	name	dept	sal	phno
2	2	2	2	2
1	1	1	1	1
4	4	4	4	4
6	6	6	6	6

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
2
Front Insert
enter student ssn:3
enter student name:3
enter student dept:3
enter student sal:3
enter student phno:3

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:5
ssn	name	dept	sal	phno
3	3	3	3	3
2	2	2	2	2
1	1	1	1	1
4	4	4	4	4
6	6	6	6	6

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
4
student record full

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
2
student record full

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:5
ssn	name	dept	sal	phno
3	3	3	3	3
2	2	2	2	2
1	1	1	1	1
4	4	4	4	4
6	6	6	6	6

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
3
Front Delete
deleted student record is:ssn:3
name:3
dept:3
sal:3
phno:3

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:4
ssn	name	dept	sal	phno
2	2	2	2	2
1	1	1	1	1
4	4	4	4	4
6	6	6	6	6

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
5
Rear Delete
deleted student record is:
ssn:6
name:6
dept:6
sal:6
phno:6

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:3
ssn	name	dept	sal	phno
2	2	2	2	2
1	1	1	1	1
4	4	4	4	4

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
5
Rear Delete
deleted student record is:
ssn:4
name:4
dept:4
sal:4
phno:4

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:2
ssn	name	dept	sal	phno
2	2	2	2	2
1	1	1	1	1

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
3
Front Delete
deleted student record is:ssn:2
name:2
dept:2
sal:2
phno:2

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
number of student records are:1
ssn	name	dept	sal	phno
1	1	1	1	1

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
5
Rear Delete
deleted student record is:
ssn:1
name:1
dept:1
sal:1
phno:1

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
5
student record empty

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
NO studentrecord to display

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
3
student record empty

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
6
NO studentrecord to display

1.create from rear
2.finsert
3.fdelete
4.rinsert
5.rdelete
6.display
7.exit
enter your choice
                                    
*/
