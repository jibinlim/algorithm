#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t > 0)
	{
		int p,m;
		cin >> p >> m;
		vector<int> v(m + 1);
		int c = 0;
		int input;
		for(int i = 0; i < p; i++)
		{
			cin >> input;
			if(v[input] > 0)
			{
				c++;
				continue;
			}
			v[input] = 1;
		}
		cout << c << '\n';
		t--;
	}
	return (0);
}
