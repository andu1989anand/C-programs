#include<stdio.h>
#include<string.h>
#include<ctype.h>
void swap(char *a,char *b)
{
char temp=*a;
*a=*b;
*b=temp;
}

void rev(char *str)
{
char *p1=str;
char *p2=str+strlen(str)-1;
while(p1<p2)
{
while(!isalnum(*p1))
p1++;
while(!isalnum(*p2))
p2--;
if(p1<p2)
{
swap(p1,p2);
p1++;
p2--;
}
}
}

void main()
{
char str[100];
printf("enter string to be reversed:");
gets(str);
printf("string to be reversed:");
puts(str);
rev(str);
printf("reversed string is:");
printf("%s\n",str);
}


/*

enter string to be reversed:@123$4%5^*
string to be reversed:@123$4%5^*
reversed string is:@543$2%1^*


enter string to be reversed:anand***kumar
string to be reversed:anand***kumar
reversed string is:ramuk***dnana


enter string to be reversed:A*F&D&S*F&E&@U#
string to be reversed:A*F&D&S*F&E&@U#
reversed string is:U*E&F&S*D&F&@A#

enter string to be reversed:123$#456
string to be reversed:123$#456
reversed string is:654$#321


enter string to be reversed:AB@#CD%^EF
string to be reversed:AB@#CD%^EF
reversed string is:FE@#DC%^BA


enter string to be reversed:A@B#124^&GH*^99
string to be reversed:A@B#124^&GH*^99
reversed string is:9@9#HG4^&21*^BA

*/
