#include <iostream>
using namespace std; 

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int num;
	int a[10001] = {0,};
	for(int i = 0; i < n; i++)
	{
		cin >> num;
		a[num]++;
	}
	for(int i = 0; i <= 10000; i++)
	{
		if(a[i] > 0)
			while(a[i] > 0)
			{
				cout << i << '\n';
				a[i]--;
			}
	}
	return (0);
}
