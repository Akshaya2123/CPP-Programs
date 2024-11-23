#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int i,w=0,space=0,nspace=0;
char a[80],b;
do
{
clrscr();
cout<<"PROGRAM TO COUNT THE CHARACTERS AND WORDS IN A STRING";

f:
cout<<"Enter any string:";
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
w++;
}
w=w+1;
for(i=0;a[i]!='\0';i++)
{
space++;
}
for(i=0;a[i]<space;i++)
{
nspace++;
}
nspace=space-nspace;
nspace--;
cout<<"Number of characters(with space):"<<space<<endl;
cout<<"Number of characters(without space):"<<nspace<<endl;
cout<<"Number of word:"<<w<<endl;
p:
cout<<"Do you want to run the program again(y/n):";
b=getch();
cin>>b;
}
while(b=='y'||b=='Y');
if(b=='n'||b=='N')
{
cout<<"\n\t\t\t\tPROGRAM ENDED";
cout<<"\n\t\t\t\t=============";
cout<<"\n\t\t\t\tpress any key";
}
else
{
cout<<"\ninvalid input";
goto p;
}
getch();
return 0;
}

