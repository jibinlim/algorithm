#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<vector<int> >paper(100,vector<int> (100));

	cin >> n;
	int r,c;
	for(int i = 0; i < n; i++)
	{
		cin >> r >> c;
		for(int j = r; j < r + 10; j++)
			for(int k = c; k < c + 10; k++)
				paper[j][k] = 1;
	}
	int count = 0;
	for(int i = 0; i < 100; i++)
		for(int j = 0; j < 100; j++)
			if(paper[i][j] == 1)
				count++;
	cout << count << endl;
	return (0);
}
