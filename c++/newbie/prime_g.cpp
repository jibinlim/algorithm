#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;

	vector<int> arr(m + 1);

	for(int i = 2; i <= m; i++)
	{
		if(arr[i] == 1)
			continue;

		for(int j = i * 2; j <= m; j+=i)
			arr[j] = 1;
	}
	arr[1] = 1;
	for(int i = n; i <= m; i++)
		if(arr[i] == 0)
			cout << i << '\n';

	return (0);
}
