#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,temp,j;
char num[2];
int k,y,p1,p2;
char b[20];
char ch,v;
clrscr();
cout<<"\n\t\t\t\tSORTING OF NUMBERS";
do
{
a1:
cout<<"\nEnter the count of numbers:";
gets(num);
y=strlen(num);
k=atoi(num);

for(i=0;i<y;i++)
{
p1=isalpha(num[i]);
if(p1==8)
{
cout<<"Invalid";
goto a1;
}
}
for(i=0;i<k;i++)
{
cout<<"\nEnter the number" <<i+1<<":";
cin>>b[i];
p2=isalpha(b[i]);
if(p2==8)
{
cout<<"Invalid";
i=i-1;
}
}
t:
cout<<"\nType of sorting  :";
cin>>ch;
if(ch=='a'||ch=='A')
{
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(b[j]<b[i])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for(i=0;i<k;++i)
{
cout<<b[i]<<endl;
}
}
else if(ch=='d'||ch=='D')
{
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(b[j]>b[i])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
for(i=0;i<k;++i)
{
cout<<b[i]<<endl;
}
}
else
{
cout<<"\ninvalid input(enter a/d)";
goto t;
}
i:
cout<<"\nDo you want to run the program again(y/n):";
flushall();
v=getch();
cout<<v;
}
while(v=='y'||v=='Y');
if(v=='n'||v=='N')
{
cout<<"\n\t\t\t\tPROGRAM ENDED";
cout<<"\n\t\t\t\t=============";
cout<<"\n\t\t\t  (press any key to exit)";
}
else
{
cout<<"\ninvalid input";
goto i;
}
getch();
return 0;
}

