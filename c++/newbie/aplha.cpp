#include <iostream>
using namespace std;

int main(void)
{
	char* s = new char[101];
	cin >> s;
	int alph[27];
	for(int i = 0; i < 26; i++)
		alph[i] = -1;
	for(int i = 0; s[i]; i++)
	{
		if(alph[s[i] - 'a'] == -1)
			alph[s[i] - 'a'] = i;
	}
	for(int i = 0; i < 26; i++)
	{
		if(i < 25)
			cout << alph[i] << " ";
		else
			cout << alph[i];
	}
	delete[] s;
	return (0);
}
