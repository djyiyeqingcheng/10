#include<iostream.h>
void main()
{
	int x,i;
	cin>>x;
	for(i=1;x>1;i++)
	{
		if(x%2!=0)
		x=x*3+1;
	else
		x=x/2;
	}
	i=i-2;
	cout<<i;
}