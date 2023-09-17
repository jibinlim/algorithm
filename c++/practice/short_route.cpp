#include <iostream>
#include <vector>
using namespace std;
int v,e;
int k;
int INF = 200000000;

int find_index(vector<bool> &visit, vector<int> &cost)
{
	int mn = INF;
	int index = k - 1;
	for(int i = 0; i < v; i++)
	{
		if(!visit[i] && cost[i] < mn)
		{
			mn = cost[i];
			index = i;
		}
	}
	return index;
}

void dijk(int s,vector<vector <int > >&g,vector<bool> &visit,vector<int> &cost)
{
	for(int i = 0; i < v; i++)
	{
		cost[i] = g[s][i];
	}
	visit[s] = true;
	for(int i = 0; i < INF; i++)
	{
		int index = find_index(visit,cost);
		if(index == k - 1)
			break;
		visit[index] = true;
		for(int j = 0; j < v; j++)
		{
			if(!visit[j])
			{
				if(cost[index] + g[index][j] < cost[j])
					cost[j] = cost[index] + g[index][j];
			}
		}
	}
}

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> v >> e;
	cin >> k;
	vector<vector <int> >g(v, vector<int>(v));
	vector<bool> visit(v);
	vector<int> cost(v);
	for(int i = 0; i < e; i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		g[a - 1][b - 1] = c;
	}
	for(int i = 0; i < v; i++)
		for(int j = 0; j < v; j++)
		{
			if(i == j)
				continue;
			if(g[i][j] == 0)
				g[i][j] = INF;
		}
	dijk(k - 1,g,visit,cost);
	for(int i = 0; i < v; i++)
	{
		if(cost[i] == INF)
			cout << "INF" << '\n';
		else
			cout << cost[i] << '\n';
	}
	return (0);
}
