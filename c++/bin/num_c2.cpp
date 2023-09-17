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

	vector<int>card(n);
	for(int i = 0; i < n; i++)
		cin >> card[i];
	sort(card.begin(),card.end());
	int m;
	cin >> m;
	int input;
	vector<int>co(m);

	for(int i = 0; i < m; i++)
	{
		cin >> input;
		int c = 0;
		int f = 0;
		int r = n - 1;
		while(f <= r)
		{
			int mid = (f + r) / 2;
			if(card[mid] == input)
			{
				c++;
				int left = mid - 1;
				int right = mid + 1;
				while(left >= 0 && card[left] == input)
				{
					c++;
					left--;
				}
				while(right < n && card[right] == input)
				{
					c++;
					right++;
				}
				break;
			}
			else if(card[mid] < input)
				f = mid + 1;
			else
				r = mid;
		}
		co[i] = c;
	}
	for(int i = 0; i < m; i++)
		cout << co[i] << ' ';
	return (0);
}
