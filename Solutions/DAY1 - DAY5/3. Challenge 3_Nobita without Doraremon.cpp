#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<char> v;
	for(char c:s)
	{
		if(c=='+') continue;
		else v.push_back(c);	
	}
	sort(v.begin(),v.end());
	auto itr=v.begin();
	for(;itr<v.end();itr++)
	{
		if(itr!=v.begin()) cout<<'+';
		cout<<*itr;
	}
	return 0;
}