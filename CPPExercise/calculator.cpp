#include <iostream>

// Super simple calculator. 
// Does not account for special case like divide by 0

int multiple(int x, int y)
{
	return x*y;
}

int divide(int x, int y)
{
	return x / y;
}

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

using namespace std;

// implements the << >> operators in header.h
//ostream &operator<<(ostream& os, const string& s) {
//	return os;
//}
//
//istream &operator>>(istream& is, string& s) {
//	return is;
//}


int Calculator ()
{
	char op;
	int x, y;
	int last_answer;
	
	while (op != 'e')
	{
		cout << "OPERATION: "
				"Add(+), Subtract(-), Divide(/), Multiple(*), [e]xit? " << '\n';
		cin >> op;
		
		// Enter first number and press enter, same with second.
		cout << ">";
		switch (op)
		{
			case '+':
				cin >> x;
				cout << "+";
				cin >> y;
				cout << x << "+" << y << "=" << add(x, y) << endl;
				break;
			case '-':
				cin >> x;
				cin >> y;
				cout << x << "-" << y << "=" << subtract(x, y) << endl;
				break;
			case '/':
				cin >> x;
				cin >> y;
				cout << x << "/" << y << "=" << divide(x, y) << endl;
				break;
			case '*':
				cin >> x;
				cin >> y;
				cout << x << "*" << y << "=" << multiple(x, y) << endl;
				break;
			case 'E':
			case 'e':
				return 0;
			default:
				cout << "Sorry, try again." << endl;
				break; 
		}
	}

	return 0;
}