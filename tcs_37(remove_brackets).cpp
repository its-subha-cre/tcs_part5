#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="a+((b-c)+d)";
	string h="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]==')')
		{
			continue;
		}
		h=h+s[i];
	}
	cout<<h;
}