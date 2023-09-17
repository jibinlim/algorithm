#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,m;
	cin >> n >> m;
	vector<vector<int> >mat1(n,vector<int>(m));
	vector<vector<int> >mat2(n,vector<int>(m));

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> mat1[i][j];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			cin >> mat2[i][j];
			mat1[i][j] += mat2[i][j];
		}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			cout << mat1[i][j] << " ";
		cout << endl;
	}
	return (0);
}
