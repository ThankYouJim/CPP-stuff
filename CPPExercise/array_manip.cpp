#include <iostream>

using namespace std;

int Array_Manip()
{
	int array[8];
	for (int x = 0; x < 8; x++) {
		cout << "Enter: ";
		cin >> array[x];
	}
	for (int x = 0; x < 8; x++)
		cout << x+1 << ": " << array[x] << endl;
	return 0;
}