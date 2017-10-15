#include<iostream.h>
void main()
{
float r,s,l;
int k;
cout<<"please input k and r"<<endl;
cin>>r>>k;
s=3.14*r*r;
l=6.28*r;
switch(k)
{
case 1:cout<<"s="<<s;break;
case 2:cout<<"l="<<l;break;
case 3:cout<<"s="<<s<<","<<"l="<<l;break;
default:cout<<"no";
}
}