#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<pair<int,int>>score(8);
	for(int i = 0; i < 8; i++)
	{
		int input;
		cin >> input;
		score.push_back({i + 1,input});
	}
	cout << score[0].second;
	for(int i = 0; i < 8; i++)
		for(int j = i + 1; j < 8; j++)
			if(score[i].second < score[j].second)
			{
				pair<int,int> temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}

	int sum = 0;
	vector<int>a(5);
	for(int i = 0; i < 5; i++)
	{
		sum += score[i].second;
		a[i] = score[i].first;
	}
	cout << sum << '\n';
	for(int i = 0; i < 5; i++)
		for(int j = i + 1; j < 5; j++)
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	for(int i = 0; i < 5; i++)
		cout << a[i] << ' ';
	return (0);
}
