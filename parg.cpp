#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) 
{
	cout << "Count: " << argc << endl;
	for (int i = 1; i < argc; i++) 
		{
			cout << "Argv[" << i << "] = " << argv[i] << endl;
		}
	char a;
	int b = atoi(argv[1]);
	a = argv[2][0];
	if ((isdigit(argv[1][0])) && (isdigit(argv[1][0]))) 
		{
			switch (a) 
				{
					case '+':
					b = b + atoi(argv[3]);
					break;
					case '-':
					b = b - atoi(argv[3]);
					break;
					default:
					cout << "ERROR" << endl;
				}
		}
	else 
		{
			cout << "ERROR" << endl;
		}
	cout << "Result: " << b << endl;
}
