#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> qs(n);
	deque<int> arr;
	int x;
	for(int i = 0; i < n; i++)
		cin >> qs[i];
	for(int i = 0; i < n; i++)
	{
		cin >> x; 
		if(qs[i] == 0)
			arr.push_back(x);
	}
	int m;
	cin >> m;
	vector<int> out(m);
	int input;
	for(int i = 0; i < m; i++)
	{
		cin >> input;
		if(arr.empty())
			out[i] = input;
		else
		{
			out[i] = arr.back();
			arr.pop_back();
			arr.push_front(input);
		}
	}
	for(int i = 0; i < m; i++)
		cout << out[i] << ' ';
	return (0);
}

