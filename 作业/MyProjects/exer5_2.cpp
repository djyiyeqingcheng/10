#include<iostream.h>
float max(int n,float s)
	{
	    int i;
		for(i=1;i<=n;i++)
		{
			s=s+2.0/(i*i+i);
		}
		return(s);
	}
	void main()
	{
		 float s=0;
		 int n;
		 cin>>n;
         s=max(n,s);
		 cout<<s<<endl;
	}