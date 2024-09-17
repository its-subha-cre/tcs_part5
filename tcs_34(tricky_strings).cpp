#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="a2fb3c4d5errr";
	string h="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
		h=h+s[i-1];
			//cout<<h;
			int f=s[i]-'0';
			for(int j=0;j<f-2;j++)
			{
				h=h+s[i-1];
			//	cout<<h;
			}
		}
		else
		{
			if(s[i]>='a'&&s[i]<='z')
			{
			h=h+s[i];
		}
		}
}
	cout<<h;
}
