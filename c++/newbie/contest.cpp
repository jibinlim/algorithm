#include <iostream>
using namespace std;

int main(void)
{
	int w[10] = {0,};
	int k[10] = {0,};

	for(int i = 0; i < 10; i++)
		cin >> w[i];
	for(int i = 0; i < 10; i++)
		cin >> k[i];

	for(int i = 0; i < 10; i++)
		for(int j = i + 1; j < 10; j++)
		{
			if(w[i] < w[j])
			{
				int temp = w[i];
				w[i] = w[j];
				w[j] = temp;
			}
			if(k[i] < k[j])
			{
				int temp = k[i];
				k[i] = k[j];
				k[j] = temp;
			}
		}
	int wsum = 0, ksum = 0;
	for(int i = 0; i < 3; i++)
	{
		wsum += w[i];
		ksum += k[i];
	}
	cout << wsum << ' ' << ksum << '\n';
	return (0);
}
