#include <iostream>
#include <vector>
using namespace std;

int n,m;

int arr[9] = {0,};
int visit[9] = {0,};

void dfs(int num, int index)
{
	arr[index] = num;
	if(index == m - 1)
	{
		for(int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for(int i = 1; i <= n; i++)
	{
		if(visit[i] == 0)
		{
			visit[i] = 1;
			dfs(i,index + 1);
			visit[i] = 0;
		}
	}
}


int main(void)
{
	cin >> n >> m;

	for(int i = 1; i <= n; i++)
	{
		visit[i] = 1;
		dfs(i,0);
		visit[i] = 0;
	}
	return (0);
}
