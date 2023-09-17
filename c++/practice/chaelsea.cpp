#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		int mx = 0;
		string s = "";
		for(int j = 0; j < p; j++)
		{
			int input;
			string in;
			cin >> input >> in;
			if(input > mx)
			{
				mx = input;
				s = in;
			}
		}
		cout << s << '\n';
	}
	return (0);
}
