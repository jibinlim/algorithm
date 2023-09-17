#include <iostream>
using namespace std;

int main(void)
{
	int n,max;
	cin >> n;
	int* score=new int[n];
	max = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> score[i];
		if(score[i] > max)
			max = score[i];
	}
	double sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum +=  ((double)score[i] /(double) max) * 100;
	}
	cout << sum / (double)n << endl;
	delete[] score;
	return (0);
}
