#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector <int> arr(n);
	vector <int> dp1(n);
	vector <int> dp2(n);

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int mx1;
	int mx2 = 0;

	for(int i = 0; i < n; i++)
	{
		mx1 = 0;
		for(int j = 0; j < i; j++)
			if(arr[i] > arr[j])
				if(mx1 < dp1[j])
					mx1 = dp1[j];
		dp1[i] = mx1 + 1;
		if(mx2 < dp1[i])
			mx2 = dp1[i];
	}
	mx2 = 0;
	for(int i = n - 1; i >= 0; i--)
	{
		mx1 = 0;
		for(int j = n - 1; j > i; j--)
			if(arr[i] > arr[j])
				if(mx1 < dp2[j])
					mx1 = dp2[j];
		dp2[i] = mx1 + 1;
		if(mx2 < dp2[i])
			mx2 = dp1[i];
	}
	int mx3 = 0;
	for(int i = 0; i < n; i++)
		if(dp1[i] + dp2[i] > mx3)
			mx3 = dp1[i] + dp2[i];
	cout << mx3 - 1 << '\n';
	return (0);
}
