#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2)
{
	return s1 < s2;
}

int main(void)
{
	int n,m;
	cin >> n >> m;
	map<string, int>x;
	string input;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		x[input] = 1;
	}
	for(int j = 0; j < m; j++)
	{
		cin >> input;
		x[input]++;
	}
	vector<string> y;
	for(auto i = x.begin(); i != x.end(); i++)
	{
		if(i -> second == 2)
			y.push_back(i -> first);
	}
	sort(y.begin(),y.end(),cmp);
	cout << y.size() << '\n';
	for(int i = 0; i < y.size(); i++)
		cout << y[i] << '\n';
	return (0);
}
