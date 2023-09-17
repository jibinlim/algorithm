#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	vector<int> arr(n + 1);
	int x;
	int f;
	f = 1;
	while(n > 0)
	{
		cin >> x;
		if(x == 0)
		{
			cout << arr[1] << '\n';
			int temp = arr[f - 1];
			arr[f - 1] = arr[1];
			arr[1] = temp;
			int i = 1;
			arr[f - 1] = 0;
			f--;
			if(f < 1)
				f = 1;
			while(i * 2  < f)
			{
				int left = i * 2;
				int right = i * 2 + 1;
				if(arr[left] < arr[right])
				{
					if(arr[i] < arr[right])
					{
						int temp = arr[i];
						arr[i] = arr[right];
						arr[right] = temp;
					}
					i = right;
				}
				else
				{
					if(arr[i] < arr[left])
					{
						int temp = arr[i];
						arr[i] = arr[left];
						arr[left] = temp;
					}
					i = left;
				}
			}
		}
		else
		{
			arr[f] = x;
			int i;
			i = f;
			while(i > 1 && arr[i / 2] < arr[i])
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
