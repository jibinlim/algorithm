#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	vector<long> arr(n + 1);
	int x;
	int f;
	f = 1;
	while(n > 0)
	{
		cin >> x;
		if(x == 0)
		{
			if(arr[1] == 2147483648)
				cout << 0 << '\n';
			else
			{
				cout << arr[1] << '\n';
				long temp = arr[f - 1];
				arr[f - 1] = arr[1];
				arr[1] = temp;
			}
			int p = 1;
			arr[f - 1] = 2147483648;
			f--;
			if(f < 1)
				f = 1;
			while(p * 2 < f)
			{
				int left = p * 2;
				int right = p * 2 + 1;
				if(arr[left] > arr[right])
				{
					if(arr[p] > arr[right])
					{
						int temp = arr[p];
						arr[p] = arr[right];
						arr[right] = temp;
					}
					p = right;
				}
				else
				{
					if(arr[p] > arr[left])
					{
						int temp = arr[p];
						arr[p] = arr[left];
						arr[left] = temp;
					}
					p = left;
				}
			}
		}
		else
		{
			arr[f] = x;
			int i;
			i = f;
			while(i > 1 && arr[i / 2] > arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[i / 2];
				arr[i / 2] = temp;
				i/=2;
			}
			f++;
		}
		n--;
	}
	return (0);
}
