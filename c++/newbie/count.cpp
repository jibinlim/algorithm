#include <iostream>
using namespace std;

int main(void)
{
	int n,v,input;
	int count[202] = {0,};

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		count[input + 100]++;
	}
	cin >> v;
	cout << count[v + 100] << endl;
	return (0);
}
