#include<iostream>
#include<string>
#include<algorithm>
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
	int max1=0;
	for(auto k:m)
	{
		max1=max(max1,k.second);
	}
	for(auto j:m)
	{
		if(j.second==max1)
		cout<<j.first<<j.second<<" ";
	}
}