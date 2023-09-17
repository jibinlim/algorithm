#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool cmp(pair <string,int>a, pair<string,int>b)
{
	return a.second < b.second;
}

int main(void)
{
	set<int> x;
	x.insert(1);
	x.insert(5);
	x.insert(0);
	x.insert(-1);
	x.insert(15);
	map<string, int>a;
	a.insert({"abd", 5});
	a["cde"]=3;
	vector<pair<string,int>>y(a.begin(),a.end());
	sort(y.begin(),y.end(),cmp);
	for(auto it = y.begin(); it != y.end(); it++)
		cout << it -> first << " " << it -> second << '\n';
	return (0);
}
