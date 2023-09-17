#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int x;
	cin >> x;

	sort(arr.begin(),arr.end());
	int f = 0;
	int r = n - 1;
	int c = 0;
	while(f < r)
	{
		int sum = arr[f] + arr[r];
		if(sum == x)
		{
			f++;
			r--;
			c++;
		}
		else if(sum > x)
			r--;
		else if(sum < x)
			f++;
	}
	cout << c << '\n';
	return (0);
}
