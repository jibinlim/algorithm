#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	string subject;
	double score;
	string grade;
	double g;
	double sum = 0;
	double count = 0;

	for(int i = 0; i < 20; i++)
	{
		cin >> subject >> score >> grade;
		if(grade[0] != 'F' && grade[0] != 'P')
			g = 4 - (grade[0] - 'A');
		else if(grade[0] == 'F')
			g = 0;
		else
			continue;
		if(grade[1] == '+')
			g += 0.5;
		sum += score * g;
		count += score;
	}
	cout << sum / count << endl;
	return (0);
}
