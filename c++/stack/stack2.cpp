#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> st(n);
	int op,num;
	int f = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> op;
		if(op == 1)
		{
			cin >> num;
			st[f] = num;
			f++;
		}
		else if(op == 2)
		{
			if(f > 0)
			{
				cout << st[f - 1];
				f--;
			}
			else
				cout << -1;
			cout << '\n';
		}
		else if(op == 3)
			cout << f << '\n';
		else if(op == 4)
		{
			if(f == 0)
				cout << 1;
			else
				cout << 0;
			cout << '\n';
		}
		else if(op == 5)
		{
			if(f > 0)
				cout << st[f - 1];
			else
				cout << -1;
			cout << '\n';
		}
	}
	return (0);
}
