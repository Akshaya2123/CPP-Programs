#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{
char a,u;
float c, units;
do
{
clrscr();
cout<<"\t\t\t\tELECTRICITY BILL";
cout<<"\nEnter the number of units consumed:";
cin>>units;
if(units<=100)
{
c=units*0;
cout<<"Your bill amount is:Rs."<<c;
}
else if(units>101&& units<=250)
{
c=units*2.6;
cout<<"Your bill amount is:Rs."<<c;
}
else if(units>251&& units<= 400)
{
c=units*3.5;
cout<<"Your bill amount is:Rs."<<c;
}
else if(units>401&& units <=600)
{
c=units*4.8;
cout<<"Your bill amount is:Rs."<<c;
}
else if(units>600)
{
c=units*5;
cout<<"Your bill amount is:Rs."<<c;
}
r:
cout<<"\nDo you want to run the program: ";
u=getch();
u=getchar();
}
while((u=='y')||(u=='Y'));
if(u=='n'||u=='N')
{
cout<<"\n\t\t\t\tProgram ended";
cout<<"\n\t\t\t\t=============";
cout<<"\n\t\t\t\tpress any key";
}
else
{
cout<<"\nInvalid input";
goto r;
}
getch();
return 0;
}

