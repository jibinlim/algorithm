#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	deque<int> dq;
	int input;
	int num;

	for(int i = 0; i < n; i++)
	{
		cin >> input;
		if(input == 1)
		{
			cin >> num;
			dq.push_front(num);
		}
		if(input == 2)
		{
			cin >> num;
			dq.push_back(num);
		}
		if(input == 3)
		{
			if(dq.empty())
				cout << -1;
			else
			{
				cout << dq.front();
				dq.pop_front();
			}
			cout << '\n';
		}
		if(input == 4)
		{
			if(dq.empty())
				cout << -1;
			else
			{
				cout << dq.back();
				dq.pop_back();
			}
			cout << '\n';
		}
		if(input == 5)
			cout << dq.size() << '\n';
		if(input == 6)
		{
			if(dq.empty())
				cout << 1;
			else
				cout << 0;
			cout << '\n';
		}
		if(input == 7)
		{
			if(dq.empty())
				cout << -1;
			else
				cout << dq.front();
			cout << '\n';
		}
		if(input == 8)
		{
			if(dq.empty())
				cout << -1;
			else
				cout << dq.back();
			cout << '\n';
		}
	}
	return (0);
}
