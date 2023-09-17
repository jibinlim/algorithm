#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> st(n);
	for(int i = 0; i < n; i++)
		cin >> st[i];
	sort(st.begin(),st.end());
	long long ans = 0;
	for(int i = 0; i < n; i++)
		ans += abs(st[i] - (i + 1));
	cout << ans << '\n';
	return (0);
}
