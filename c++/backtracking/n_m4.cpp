#include <iostream>
#include <vector>
using namespace std;

int n,m;
int arr[9];
int stack[9];

void dfs(int num, int index)
{
	arr[index] = num;
	if(index == m - 1)
	{
		for(int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << '\n';
		return;
	}
	for(int i = num; i <= n; i++)
		dfs(i,index + 1);
}


int main(void)
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		stack[i] = i;

	for(int i = 1; i <= n; i++)
		dfs(i,0);
	return (0);
}
