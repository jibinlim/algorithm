#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int upper(vector<int> c, int input)
{
	int left = 0;
	int right = n;

	while(left < right)
	{
		int mid = (left + right) / 2;
		printf("left : %d right : %d mid : %d \n",left,right,c[mid]);
		if(c[mid] > input)
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}

int lower(vector<int> c, int input)
{
	int left = 0;
	int right = n;

	while(left < right)
	{
		int mid = (left + right) / 2;
		printf("left : %d right : %d mid : %d \n",left,right,c[mid]);
		if(c[mid] >= input)
			right = mid;
		else
			left = mid + 1;
	}
	return left;
}


int main(void)
{
	scanf("%d",&n);
	vector<int> c(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&c[i]);
	sort(c.begin(),c.end());
	int m;
	scanf("%d",&m);
	for(int i = 0; i < m; i++)
	{
		int input;
		scanf("%d",&input);
		printf("%d ",upper(c,input) - lower(c,input));
	}
	return (0);
}
