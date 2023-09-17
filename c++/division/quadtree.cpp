#include <cstdio>
using namespace std;
int map[65][65] = {0,};

void quadtree(int x, int y, int n)
{
	int a = map[x][y];
	bool flag = true;
	for(int i = x; i < x + n; i++)
	{
		for(int j = y; j < y + n; j++)
			if(map[i][j] != a)
			{
				flag = false;
				break;
			}
		if(!flag)
			break;
	}
	if(flag)
	{
		printf("%d",a);
		return;
	}
	printf("(");
	quadtree(x,y,n/2);
	quadtree(x,y + n / 2, n / 2);
	quadtree(x + n / 2, y, n / 2);
	quadtree(x + n / 2, y + n / 2, n / 2);
	printf(")");
}

int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%1d",&map[i][j]);
	quadtree(0,0,n);
	return (0);
}
