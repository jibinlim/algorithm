#include <iostream>
#include <vector>
using namespace std;
int n,m;
int g[1001][1001] = {0,};
int v[1001] = {0,};
long cost[1001] = {0,};
long INF = 2000000000;
int s,e;

int find_index(void)
{
	int mn = INF;
	int index = s;
	for(int i = 1; i <= n; i++)
	{
		if(v[i] == 0 && cost[i] < mn)
		{
			mn = cost[i];
			index = i;
		}
	}
	return index;
}
	

void dijk(void)
{
	for(int i = 1; i <= n; i++)
	{
		if(i == s)
		{
			cost[i] = 0;
			continue;
		}
		if(g[s][i] == 0)
			cost[i] = INF;
		else
			cost[i] = g[s][i];
	}
	v[s] = 1;
	for(int i = 0; i < INF; i++)
	{
		int index = find_index();
		if(index == s)
			break;
		v[index] = 1;
		for(int j = 1; j <= n; j++)
		{
			if(g[index][j] == 0)
				continue;
			if(v[j] == 0 && cost[j] > cost[index] + g[index][j])
				cost[j] = cost[index] + g[index][j];
		}
	}
}

int main(void)
{
	cin >> n;
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if(g[a][b] > c)
			g[a][b] = c;
	}
	cin >> s >> e;
	dijk();
	cout << cost[e] << '\n';
	return (0);
}
