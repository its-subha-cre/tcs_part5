#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n=12345;
	int s=0;
	while(n>9)
	{
		while(n!=0)
		{
			int d=n%10;
			s=s+d;
			n=n/10;
		}	
	n=s;
	s=0;
	}
	cout<<n;	
}