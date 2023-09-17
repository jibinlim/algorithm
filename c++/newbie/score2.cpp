#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int s[5] = {0,};
		int mx = 0;
		int mn = 11;
		int mx_i;
		int mn_i;
		int sum = 0;
		for(int j = 0; j < 5; j++)
		{
			cin >> s[j];
			sum += s[j];
			if(s[j] > mx)
			{
				mx = s[j];
				mx_i = j;
			}
			if(s[j] < mn)
			{
				mn = s[j];
				mn_i = j;
			}
		}
		sum -= (mx + mn);
		int mxx = 0;
		int mnn = 11;
		for(int j = 0; j < 5; j++)
		{
			if(j == mx_i || j == mn_i)
				continue;
			if(s[j] > mxx)
				mxx = s[j];
			if(s[j] < mnn)
				mnn = s[j];
		}
		if(mxx - 4 >= mnn)
			cout << "KIN" << '\n';
		else
			cout << sum << '\n';
	}
	return (0);
}
