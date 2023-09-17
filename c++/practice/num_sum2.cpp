#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	unsigned long long m;
	cin >> n >> m;
	vector <int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int s = 0;
	int e = s + 1;
	int c = 0;
	unsigned long long sum = 0;
	while(s < n)
	{
		if(sum + arr[s] < m)
		{
			sum += arr[s];
			s++;
		}
		else if(sum + arr[s] == m)
		{
			c++;
			sum = 0;
			s = e;
			e++;
		}
		else
		{
			sum = 0;
			s = e;
			e++;
		}
	}
	cout << c << '\n';
	return (0);
}
