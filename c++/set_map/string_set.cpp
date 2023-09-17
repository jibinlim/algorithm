#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	int n,m;
	cin >> n >> m;
	string input;
	set<string>s;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		s.insert(input);
	}
	int c = 0;
	for(int i = 0; i < m; i++)
	{
		cin >> input;
		if(s.find(input) != s.end())
			c++;
	}
	cout << c << '\n';
	return (0);
}
