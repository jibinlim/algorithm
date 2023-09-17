#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> f_c(n);
	for(int i = 0; i < n; i++)
		cin >> f_c[i];
	int m;
	cin >> m;
	unordered_map<int, int>t_c;
	int x;
	vector<int> a(m);
	for(int i = 0; i < m; i++)
	{
		cin >> a[i];
		t_c[a[i]] = 0;
	}
	for(int i = 0; i < n; i++)
	{
		if(t_c.find(f_c[i]) != t_c.end())
			t_c[f_c[i]]++;
	}
	for(int i = 0; i < m; i++)
		cout << t_c[a[i]] << ' ';
	return (0);
}
