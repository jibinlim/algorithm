#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	int n,m;
	cin >> n >> m;
	set<int> a;
	set<int> b;
	int input;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		a.insert(input);
	}
	for(int j = 0; j < m; j++)
	{
		cin >> input;
		b.insert(input);
	}
	int a_len = a.size();
	int b_len = b.size();
	int c = 0;
	for(auto i = a.begin(); i != a.end(); i++)
	{
		if(b.find(*i) != b.end())
			c++;
	}
	a_len -= c;
	c = 0;
	for(auto i = b.begin(); i != b.end(); i++)
	{
		if(a.find(*i) != a.end())
			c++;
	}
	b_len -= c;
	cout << a_len + b_len << '\n';
	return (0);
}
