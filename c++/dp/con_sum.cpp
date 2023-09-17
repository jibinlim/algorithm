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

	int max = -2147483647;
	dp[0] = arr[0];
	for(int i = 1; i < n; i++)
	{
		if(dp[i - 1] + arr[i] > arr[i])
			dp[i] = dp[i - 1] + arr[i];
		else
			dp[i] = arr[i];
	}
	for(int i = 0; i < n; i++)
		if(dp[i] > max)
			max = dp[i];

	cout << max << '\n';
	return (0);
}
