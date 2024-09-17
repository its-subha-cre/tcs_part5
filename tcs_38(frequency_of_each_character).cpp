#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	map<char,int>m;
	string s="takeuforward";
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]+=1;
	}
	for(auto j:m)
	{
		cout<<j.first<<j.second<<" ";
	}
}