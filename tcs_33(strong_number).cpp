#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int factorial(int n)
{
int p=1;
	for(int i=1;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}
int main()
{
int n=26;
int k=n;
int s=0;
while(n!=0)
{
	int d=n%10;
	int x=factorial(d);
	s+=x;
	n=n/10;
	}
	if(s==k)
	{
		cout<<k<<" is a strong number"<<endl;
		}	
		else
		{
			cout<<k<<" is not a strong number"<<endl;
		}
}