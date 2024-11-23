include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<iostream.h>
#include<iomanip.h>
int main()
{
int i,j;
char num[10],temp;
int k,y,p1,p2;
char b[20];
char ch,v;
do
{
clrscr();
cout<<"\n\t\t\t\tSORTING OF STRING";

a1:
cout<<"\nEnter the count of String:";
gets(num);
y=strlen(num);
k=atoi(num);

for(i=0;i<y;i++)
{
p1=isalpha(num[i]);
if(p1==8)
{
cout<<"\nInvalid";
goto a1;
}
}
for(i=0;i<k;i++)
{
cout<<"\nEnter the String "<<i+1<<":";
cin>>b[i];
p2=isalpha(b[i]);
if(p2==0)
{
cout<<"\nInvalid";
i=i-1;
}
}
t:
cout<<"\nType of sorting  :";
ch=getchar();
if(ch=='a'||ch=='A')
{
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
strcmp((b[i],b[j])>0);
{
strcpy(temp,b[i]);
strcpy(b[i],b[j]);
strcpy(b[j],temp);
}
}
}
cout<<"\nSORTED ELEMENTS IN ASCENDING ORDER";
for(i=0;i<k;++i)
{
cout<<b[i]<<endl;
}
}
if(ch=='d'||ch=='D')
{
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
strcmp((b[i],b[j])<0);
{
strcpy(temp,b[i]);
strcpy(b[i],b[j]);
strcpy(b[j],temp);
}
}
}
cout<<"\nSORTED ELEMENTS IN DESCENDING ORDER";
for(i=0;i<k;++i)
{
cout<<b[i]<<endl;
}
}
else
{
cout<<"\ninvalid input (enter either a or d)";
goto t;
}
i:
cout<<"\nDo you want to run the program again(y/n):";
v=getch();
v=getchar();
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

