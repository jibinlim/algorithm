#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef pair<string, int>ii;

bool cmp(ii a, ii b)
{
	if(a.second != b.second)
		return a.second > b.second;
	else if(a.first.length() != b.first.length())
		return a.first.length() > b.first.length();
	else
		return a.first < b.first;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	map <string,int>word;
	string input;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		if(input.length() >= m)
			word[input]++;
	}
	vector<ii> w(word.begin(),word.end());
	sort(w.begin(),w.end(),cmp);
	for(auto i = w.begin(); i != w.end(); i++)
		cout << i -> first << '\n';
	return (0);
}
