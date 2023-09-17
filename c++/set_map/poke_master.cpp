#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	map<int, string>poke;
	map<string, int>a;
	string input;
	for(int i = 1; i <= n; i++)
	{
		cin >> input;
		poke[i] = input;
		a[input] = i;
	}
	string x;
	for(int j = 0; j < m; j++)
	{
		cin >> x;
		if(x[0] >= '0' && x[0] <= '9')
		{
			int s = stoi(x);
			cout << poke[s] << '\n';
		}
		else
			cout << a[x] << '\n';
	}
	return (0);
}
