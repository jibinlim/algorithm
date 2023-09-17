#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	 cin.tie(0);
    ios::sync_with_stdio(false);
	string s;
	cin >> s;
	int len = s.length();
	vector<vector <int> >xx(len, vector<int>(26));
	xx[0][s[0] - 'a']++;
	for(int i = 1; i < len; i++)
	{
		xx[i][s[i] - 'a']++;
		for(int j = 0; j < 26; j++)
		{
			xx[i][j] = xx[i - 1][j] + xx[i][j];
		}
	}
	int q;
	cin >> q;
	char x;
	int l;
	int r;
	for(int i = 0; i < q; i++)
	{
		cin >> x >> l >> r;
		int c = 0;
		if(l > 0)
			cout << xx[r][x - 'a'] - xx[l - 1][x - 'a'] << '\n';
		else
			cout << xx[r][x - 'a']  << '\n';
	}
	return (0);
}
