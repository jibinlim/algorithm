#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector <int> card(10000001);
	int f = 1;
	int r = n;
	for(int i = 1; i <= n; i++)
		card[i] = i;
	while(f < r)
	{
		card[f] = 0;
		f++;
		if(f == r)
			break;
		r++;
		card[r] = card[f];
		f++;
	}
	cout << card[f] << endl;
	return (0);
}
