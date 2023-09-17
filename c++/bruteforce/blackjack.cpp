#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;
	vector <int> card(n);

	for(int i = 0; i < n; i++)
		cin >> card[i];
	int max = 0;
	for(int i = 0; i < n - 2; i++)
	{
		for(int j = i + 1; j < n - 1; j++)
		{
			for(int k = j + 1; k < n; k++)
			{
				int sum = card[i] + card[j] + card[k];
				if(sum <= m && max < sum)
					max = sum;
				if(max == m)
					break;
			}
			if(max == m)
				break;
		}
		if(max == m)
			break;
	}
	cout << max << endl;
	return (0);
}
