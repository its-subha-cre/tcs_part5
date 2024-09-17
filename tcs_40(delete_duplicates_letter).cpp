#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<int,int>m;
	string s="abcabcccshd";
	string y="";
	m[256]={0};
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]+=1;
		if(m[s[i]]>1)
		{
			continue;
		}
			y=y+s[i];
	}
	cout<<y;
	
}