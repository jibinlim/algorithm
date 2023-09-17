#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(void)
{
	while(true)
	{
		int x = 0;
		char str[101];
		cin.getline(str, 101);
		vector <int> stack(101);
		int f = 0;
		if(str[0] == '.')
			break;
		for(int i = 0; str[i]; i++)
		{
			if(str[i] == '(')
				stack[f++] = 1;
			else if(str[i] == ')')
			{
				f--;
				if(f < 0 || stack[f] != 1)
				{
					x = 1;
					break;
				}
			}
			if(str[i] == '{')
				stack[f++] = 2;
			else if(str[i] == '}')
			{
				f--;
				if(f < 0 || stack[f] != 2)
				{
					x = 1;
					break;
				}
			}
			if(str[i] == '[')
				stack[f++] = 3;
			else if(str[i] == ']')
			{
				f--;
				if(f < 0 || stack[f] != 3)
				{
					x = 1;
					break;
				}
			}
		}
		if(f == 0 && x == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return (0);
}

	
