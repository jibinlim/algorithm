#include <iostream>
using namespace std;

int main(void)
{
	int a,b,c;

	while(1)
	{
		cin >> a >> b >> c;
		int a_t,b_t,c_t;
		a_t = a;
		b_t = b;
		c_t = c;
		if(a == -1 && b == -1 && c == -1)
			break;
		int x[51][51][51] = {0,};
		if(a <= 0 || b <= 0 || c <= 0)
		{
			cout <<"w("<<a<<','<<' '<< b <<','<<' '<<c << ") = " << 1 << '\n';
			continue;
		}
		if(a > 20 || b > 20 || c > 20)
		{
			a = 20;
			b = 20;
			c = 20;
		}
		for(int i = 0; i <= a; i++)
			for(int j = 0; j <= b; j++)
				for(int k = 0; k <= c; k++)
				{
					if(i == 0 || j == 0 || k == 0)
						x[i][j][k] = 1;
					else if(i < j && j < k)
						x[i][j][k] = x[i][j][k - 1] + x[i][j-1][k-1] - x[i][j - 1][k];
					else
						x[i][j][k] = x[i - 1][j][k] + x[i - 1][j - 1][k] + x[i - 1][j][k - 1] - x[i - 1][j - 1][k - 1];
				}
		cout <<"w("<<a_t<<','<<' '<< b_t <<','<<' '<<c_t << ") = " << x[a][b][c] << '\n';
	}
	return (0);
}


