#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);

	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	int sum = 0;

	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),cmp);

	for(int i = 0; i < n; i++)
		sum += (a[i] * b[i]);
	cout << sum << '\n';
	return (0);
}
