#include <iostream>
#include <vector>
using namespace std;

int n;
int s[20][20];
int mn = 2147483647;
int stack[11];
int visit[20] = {0,};

void dfs(int i,int c)
{
	stack[c] = i;
	if(c == (n / 2) - 1)
	{
		int a = 0;
		for(int j = 0 ; j < n / 2; j++)
			for(int k = 0; k < n / 2; k++)
				a += s[stack[j]][stack[k]];
		vector <int> x(n);
		for(int j = 0; j < n / 2; j++)
			x[stack[j]]++;
		vector <int> y(n);
		for(int j = 0, k = 0; j < n; j++)
			if(x[j] == 0)
			{
				y[k] = j;
				k++;
			}
		int b = 0;
		for(int j = 0; j < n / 2; j++)
			for(int k = 0; k < n / 2; k++)
				b += s[y[j]][y[k]];
		int d = 0;
		if(a > b)
			d = a - b;
		else
			d = b - a;
		if(mn > d)
			mn = d;
		return;
	}
	for(int j = i + 1; j < n; j++)
		if(visit[j] == 0)
		{
			visit[j] = 1;
			dfs(j,c + 1);
			visit[j] = 0;
		}
}

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> s[i][j];

	for(int i = 0; i < n; i++)
	{
		visit[i] = 1;
		dfs(i,0);
		visit[i] = 0;
	}
	cout << mn << '\n';
	return 0;
}
