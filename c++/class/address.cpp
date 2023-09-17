#include <iostream>
#include <cstring>
using namespace std;

class Print{
	private:
		char name[10];
		char address[25];
	public:
		Print(char new_name[10], char new_address[25]){
			strcpy(name,new_name);
			strcpy(address,new_address);
		}

		void output(void)
		{
			cout << "이름 : " << name << endl;
			cout << "주소 : " << address << endl;
		}
};
			

int main(void)
{
	char name[10];
	char address[25];
	cin >> name >> address;
	Print print(name,address);
	print.output();
	return (0);
}
