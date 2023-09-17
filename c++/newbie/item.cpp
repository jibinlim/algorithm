#include <iostream>
#include <vector>
using namespace std;
int x = 0;

void dfs(int index, vector<int> arr, int k, int t,int c,vector <int> stack)
{
	stack[c - 1] = arr[index];
	if(c >= k)
	{
		int sum = 0;
		for(int i = 0; i < c; i++)
			sum += stack[i];
		if(sum <= t)
		{
			x++;
		}
	}
	for(int i = index + 1; i < arr.size(); i++)
	{
			dfs(i,arr,k,t,c + 1,stack);
	}
}

int main(void)
{
	int n;
	int k;
	int t;
	cin >> n >> k >> t;
	vector <int> arr(n);
	vector <int> stack(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 0; i < arr.size(); i++)
	{
		dfs(i,arr,k,t,1,stack);
	}
	cout << x << '\n';
	return (0);
}
