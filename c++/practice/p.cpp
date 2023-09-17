#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector <int> card(n);

	for(int i = 0; i < n; i++)
		cin >> card[i];

	int m;
	cin >> m;
	map<int,bool> x;
	vector <int> a(m);
	for(int i = 0; i < m; i++)
	{
		cin >> a[i];
		x[a[i]] = false;
	}

	for(int i = 0; i < n; i++)
		x[card[i]] = true;
	for(int i = 0; i < m; i++)
		cout << x[a[i]] << ' ';

	return (0);
}
