#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(void)
{
	string str;
	cin >> str;
	int alp[27] = {0,};
	int max = 0;
	int max_i;
	int len = str.length();
	for(int i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		alp[str[i] - 'A']++;
		if(max < alp[str[i] - 'A'])
		{
			max = alp[str[i] - 'A'];
			max_i = str[i] - 'A';
		}
	}
	for(int i = 0; i < 27; i++)
	{
		if(alp[i] == max && max_i != i)
		{
			cout << '?' << endl;
			return (0);
		}
	}
	printf("%c",max_i + 'A');
	return (0);
}
