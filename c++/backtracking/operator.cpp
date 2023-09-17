#include <iostream>
using namespace std;

int n;
int num[12];
int op[4];
int mx = -2147483648;
int mn = 2147483647;
int visit[4] = {0,};

void dfs(int i,int result ,int c)
{
	if(i == 0)
		result += num[c];
	else if(i == 1)
		result -= num[c];
	else if(i == 2)
		result *= num[c];
	else if(i == 3)
		result /= num[c];
	if(c == n - 1)
	{
		if(mn > result)
			mn = result;
		if(mx < result)
			mx = result;
		return;
	}
	for(int i = 0; i < 4; i++)
	{
		if(op[i] > 0 && visit[i] < op[i])
		{
			visit[i]++;
			dfs(i,result,c + 1);
			visit[i]--;
		}
	}
}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> num[i];
	for(int i = 0; i < 4; i++)
		cin >> op[i];

	for(int i = 0; i < 4; i++)
	{
		if(op[i] > 0)
		{
			visit[i]++;
			dfs(i,num[0],1);
			visit[i]--;
		}
	}
	cout << mx << '\n' << mn << '\n';
	return (0);
}
	
