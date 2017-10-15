#include<iostream.h>
#include<math.h>
void main()
{
float a,b,c,s,S;
cout<<"please input three numbs:"<<endl;
cin>>a>>b>>c;
s=(a+b+c)/2;
S=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<S<<endl;
}