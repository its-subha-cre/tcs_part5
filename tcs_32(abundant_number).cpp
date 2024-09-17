#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int n=21;
	int s=0;
	for(int i=1;i<n;i++)
	{
	if(n%i==0)
	{
		s+=i;
		}	
	}
	if(s>18)
	{
		cout<<n<<" is an abundant number"<<endl;
	}
	else
	{
		cout<<n<<" is not an abundant number"<<endl;
	}
}