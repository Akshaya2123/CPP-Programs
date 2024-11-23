#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
int d;
char a[10],s;
do
{
clrscr();
cout<<"\t\t\tPROGRAM TO FIND THE LENGTH OF A STRING";
x:
cout<<"\nEnter a string:";
gets(a);
d=strlen(a);
if(d==0)
{
cout<<"\nnull input is not valid";
goto x;
}
else
{
cout<<"\nLength of the string:"<<strlen(a);
cout<<"\nUpper case of the string:"<<strupr(a);
cout<<"\nLower case of the string:"<<strlwr(a);
cout<<"\nReversed string:"<<strrev(a);
}
d:
cout<<"\nDo you want to run again(y/n):";
flushall();
s=getchar();
}
while(s=='y'||s=='Y');
if(s=='n'||s=='N')
{
cout<<"\n\t\t\t\tPROGRAM ENDED";
cout<<"\n\t\t\t\t=============";
cout<<"\n\t\t\t       (press any key)";
}
else
{
cout<<"\ninvalid input";
goto d;
}
getch();
}

