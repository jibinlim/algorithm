#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<string, int> ii;
bool cmp(string s1, string s2)
{
	return s1 > s2;
}

int main(void)
{
	int n;
	cin >> n;
	vector <string>movie(n);
	map <string, int>m;
	sort(movie.begin(),movie.end(),cmp);
	int mx = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> movie[i];
		m[movie[i]]++;
		if(m[movie[i]] > mx)
			mx = m[movie[i]];
	}
	vector<ii> v(m.begin(),m.end());
	sort(v.begin(), v.end(), [](ii a,ii b){
			return a.second > b.second;
			});
	vector <string>ans;

	for(auto i = v.begin(); i != v.end(); i++)
	{
		ans.push_back(i -> first);
	}
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';
	return (0);

}
