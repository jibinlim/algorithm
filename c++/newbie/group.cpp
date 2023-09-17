#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	int n,count = 0;
	string str;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> str;
		vector<int> alph(27);
		for(int j = 0; str[j]; j++)
		{
			if(alph[str[j] - 'a'] == 0 || j == 0)
				alph[str[j] - 'a'] = 1;
			else if(str[j - 1] == str[j])
				continue;
			else if(alph[str[j] - 'a'] == 1)
			{
				count--;
				break;
			}
		}
		count++;
	}
	cout << count << endl;
	return (0);
}
