#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	cin >> n >> m;
	vector<int> bascket(n + 1);
	for(int i = 1; i <= n; i++)
		bascket[i] = i;
	int s,e;
	for(int i = 0; i < m; i++)
	{
		cin >> s >> e;
		int temp = bascket[s];
		bascket[s] = bascket[e];
		bascket[e] = temp;
	}

	for(int i = 1; i <= n; i++)
	{
		if(i != n)
			cout << bascket[i] << " ";
		else
			cout << bascket[i] << endl;
	}
	return (0);
}
