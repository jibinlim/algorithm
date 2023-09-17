#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
	int n,k;
	cin >> n >> k;
	vector <int> circle(n + 1);
	vector <int> result(n);

	for(int i = 1; i <= n; i++)
		circle[i] = i;
	int f = 0;
	int count;
	int j = 1;
	while(f < n)
	{
		count = 0;
		while(count < k)
		{
			while(circle[j] == 0)
			{
				j++;
				if(j > n)
					j = 1;
			}
			if(circle[j] != 0)
			{
				count++;
				if(count == k)
					break;
				j++;
				if(j > n)
					j = 1;
			}
		}
		result[f] = circle[j];
		circle[j] = 0;
		f++;
	}
	cout << "<";
	for(int i = 0; i < f; i++)
	{
		if(i != f - 1)
			cout << result[i] << ", ";
		else
			cout << result[i] << ">";
	}
	return (0);
}
