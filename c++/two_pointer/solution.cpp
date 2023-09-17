#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int abs(int a)
{
	if(a < 0)
		return a * -1;
	return a;
}
int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> acid(n);

	for(int i = 0; i < n; i++)
		cin >> acid[i];

	sort(acid.begin(),acid.end());
	int f = 0;
	int r = n - 1;
	int mn = 2147483647;
	int mn_z;
	int mn_o;
	int ans[2];
	while(f < r)
	{
		int sum = acid[f] + acid[r];
		if(sum == 0)
		{
			mn_z = f;
			mn_o = r;
			break;
			f++;
			r--;
		}
		if(sum > 0)
		{
			if(abs(sum) < mn)
			{
				mn = abs(sum);
				mn_z = f;
				mn_o = r;
			}
			r--;
		}
		if(sum < 0)
		{
			if(abs(sum) < mn)
			{
				mn = abs(sum);
				mn_z = f;
				mn_o = r;
			}
			f++;
		}
	}
	cout << acid[mn_z] << ' ' << acid[mn_o] << '\n';
	return (0);
}
