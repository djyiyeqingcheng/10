#include<iostream.h>
void main()
{
int x,leap;
cout<<"please input x:"<<endl;
cin>>x;
if(x%3==0)
leap=1;
else
leap=0;
if(x%7==0)
leap=1;
else
leap=0;
if(leap==1)
cout<<"YES"<<endl;
if(leap==0)
cout<<"NO"<<endl;
}