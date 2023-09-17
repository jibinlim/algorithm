#include <vector>
#include <queue>
#include <cstdio>
using namespace std;

int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	vector<vector <int> >maze(n, vector<int>(m));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%1d",&maze[i][j]);
	queue<int> xq;
	queue<int> yq;
	queue<int> tq;

	int x,y,t;
	xq.push(0);
	yq.push(0);
	tq.push(1);
	int mo[4] = {0,0,-1,1};
	int ve[4] = {-1,1,0,0};
	while(!xq.empty())
	{
		x = xq.front();
		y = yq.front();
		t = tq.front();
		xq.pop();
		yq.pop();
		tq.pop();
		if(x == n - 1 && y == m - 1)
			break;

		for(int i = 0; i < 4; i++)
		{
			int dx = x + mo[i];
			int dy = y + ve[i];
			if(dx < 0 || dy < 0 || dx > n - 1 || dy > m - 1)
				continue;
			if(maze[dx][dy] == 1)
			{
				maze[dx][dy] = 0;
				xq.push(dx);
				yq.push(dy);
				tq.push(t + 1);
			}
		}
	}
	printf("%d\n",t);
	return (0);
}
