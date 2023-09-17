#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n,k;
	cin >> n >> k;
	vector <int> score(n);
	for(int i = 0; i < n; i++)
		cin >> score[i];
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if(score[i] < score[j])
			{
				int temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
	cout << score[k - 1] << endl;
	return (0);
}
