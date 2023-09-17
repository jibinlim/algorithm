#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2)
{
	return s1 > s2;
}

int main(void)
{
	int n;
	cin >> n;
	map<string, bool>com;
	string input;
	string enl;

	for(int i = 0; i < n; i++)
	{
		cin >> input >> enl;
		if(enl == "leave")
			com[input] = false;
		else
			com[input] = true;
	}
	vector<string> x;
	for(auto i = com.begin(); i != com.end(); i++)
	{
		if(i -> second)
			x.push_back(i -> first);
	}
	sort(x.begin(),x.end(),cmp);
	
	for(auto i = x.begin(); i != x.end(); i++)
		cout << *i << '\n';
	return (0);
}
