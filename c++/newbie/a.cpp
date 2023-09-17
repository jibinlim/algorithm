#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b)
{
	if(a.first > b.first)
		return a > b;
	return a < b;
}

int main(void)
{
	vector<pair<int, int > >x(2);

	x[0].first = 1;
	x[0].second = 2;
	x[1].first = 3;
	x[1].second = 4;

	sort(x.begin(),x.end(),cmp);
	for(auto it = x.begin(); it != x.end(); it++)
		cout << it -> first << ' ' << it -> second << ' ';
	return (0);
}
