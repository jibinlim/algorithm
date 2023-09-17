#include <iostream>
#include <vector>
using namespace std;
int a[3] = {0,};
int paper[3001][3001] = {0,};
void divi(int x, int y, int n)
{
	int num = paper[x][y];
	bool flag = true;
	for(int i = x; i < x + n; i++)
	{
		for(int j = y; j < y + n; j++)
			if(num != paper[i][j])
			{
				flag = false;
				break;
			}
		if(!flag)
			break;
	}
	if(flag)
	{
		a[num + 1]++;
		return;
	}
	int t = n / 3;
	divi(x,y,t);
	divi(x,y + t , t);
	divi(x,y + (t * 2), t);
	divi(x + t, y, t);
	divi(x + t, y + t, t);
	divi(x + t, y + (t * 2), t);
	divi(x + (t * 2), y, t);
	divi(x + (t * 2), y + t, t);
	divi(x + (t * 2), y + (t * 2),t);
}

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> paper[i][j];

	divi(0,0,n);
	cout << a[0] << '\n' << a[1] << '\n' << a[2] << '\n';
	return (0);
}
