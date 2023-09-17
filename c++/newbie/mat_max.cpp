#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<vector<int> >mat(9, vector<int>(9));
	int max = 0;
	int max_i,max_j;
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < 9; j++)
		{
			cin >> mat[i][j];
			if(max < mat[i][j])
			{
				max = mat[i][j];
				max_i = i;
				max_j = j;
			}
		}
	cout << max << endl << max_i + 1 << " " << max_j + 1 << endl;
	return (0);
}
