#include <iostream>
using namespace std;

int main(void)
{
	string now;
	cin >> now;
	int h = (now[0] - '0') * 10 + now[1] - '0';
	int m = (now[3] - '0') * 10 + now[4] - '0';
	int s = (now[6] - '0') * 10 + now[7] - '0';
	cin >> now;
	int nh = (now[0] - '0') * 10 + now[1] - '0';
	int nm = (now[3] - '0') * 10 + now[4] - '0';
	int ns = (now[6] - '0') * 10 + now[7] - '0';

	if(s > ns)
	{
		nm--;
		ns += 60;
	}
	if(m > nm)
	{
		nh--;
		if(nh < 0)
			nh = 23;
		nm += 60;
	}
	
	nh -= h;
	nm -= m;
	ns -= s;
	if(nh < 0)
		nh += 24;
	if(nh < 10)
		cout << "0" << nh << ":";
	else
		cout << nh << ":";
	if(nm < 10)
		cout  << "0" << nm;
	else
		cout << nm;
	cout << ":";
	if(ns < 10)
		cout << "0" << ns;
	else
		cout << ns;
	return (0);
}

