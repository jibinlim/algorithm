#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t > 0)
	{
		int n;
		cin >> n;
		int sum = 0;
		vector<int>x (n);
		int input;
		int i = 0;
		int mx = 0;
		int mn = 100;
		while(i < n)
		{
			cin >> x[i];
			if(mx < x[i])
				mx = x[i];
			if(mn > x[i])
				mn = x[i];
			sum += x[i];
			i++;
		}
		sum /= n;
		int ans = (sum - mn) * 2 + (mx - sum) * 2;
		cout << ans << '\n';
		t--;
	}
	return (0);
}
