#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	cin >> n >> m;
	vector<int> bascket(n);

	int s,e,b;
	for(int i = 0; i < m; i++)
	{
		cin >> s >> e >> b;
		for(int j = s - 1; j < e; j++)
			bascket[j] = b;
	}
	for(int i = 0; i < n; i++)
	{
		if(i < n - 1)
			cout << bascket[i] << " ";
		else
			cout << bascket[i] << endl;
	}
	return (0);
}
