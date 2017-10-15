#include<iostream.h>
void main()
{
	int a,b;
	char op;
	cout<<"ÊäÈëÕûÊýa/b:";
	cin>>a>>op>>b;
	if(a%b==0)
	{cout<<a<<op<<b<<'='<<a/b<<endl;}
	else
	{cout<<a<<op<<b<<'='<<a/b<<"..."<<a%b<<endl;}
}
