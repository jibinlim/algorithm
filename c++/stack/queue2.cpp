#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	string input;
	queue<int> q;
	int num;

	for(int i = 0; i < n; i++)
	{
		cin >> input;
		if(input == "push")
		{
			cin >> num;
			q.push(num);
		}
		if(input == "front")
		{
			if(q.empty())
				cout << -1;
			else
				cout << q.front();
			cout << '\n';
		}
		if(input == "back")
		{
			if(q.empty())
				cout << -1;
			else
				cout << q.back();
			cout <<'\n';
		}
		if(input == "pop")
		{
			if(q.empty())
				cout << -1;
			else
			{
				cout << q.front();
				q.pop();
			}
			cout << '\n';
		}
		if(input == "size")
			cout << q.size() << '\n';
		if(input == "empty")
		{
			if(q.empty())
				cout << 1;
			else
				cout << 0;
			cout << '\n';
		}
	}
	return (0);
}
