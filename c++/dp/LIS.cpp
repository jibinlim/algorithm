#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> dp(n);

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int mx = 0;
	int mn;
	for(int i = 0; i < n; i++)
	{
		mn = 0;
		for(int j = 0; j < i; j++)
			if(arr[i] > arr[j])
				if(dp[j] > mn)
					mn = dp[j];
		dp[i] = mn + 1;
		if(mx < dp[i])
			mx = dp[i];
	}

	cout << mx << '\n';
	return (0);
}
