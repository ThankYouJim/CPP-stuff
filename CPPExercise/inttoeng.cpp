#include <iostream>
#include <string>
#include <sstream>

// Programs takes in user input as string
// Convert input into int and display as english

using namespace std;

int inttoeng()
{
	// Single digits 1-9
	string digit[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	// Tens: 10 - 90
	string tens[9] = { "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	// 100 / 1000 / 10,000 / 100,000 / 1000,000
	string unit[] = { "hundred", "thousand", "ten thousand", "hundred thousand", "million" };
	string negative[] = { "negative" };
	
	// Collects user input
	int inputNum;
	string input, output;

	// Assume user does not enter negative or 0 yet
	cout << "Enter a number (up to 1000 000): ";

	// While user does not [e]xit, prompt user for input
	while(input != "e") {
		getline(cin, input);
		stringstream myStream(input);
	// check if the input is a pure integer
		if (myStream >> inputNum)
			break;
	// prompt user to re-enter if not
		cout << "Please input integers only.";
	}

	// Convert to words
	// I've no idea what to name "i" yet
	int i = 0;

	while (i != 0) {
		i = inputNum % 1000000;
	}
	cout << inputNum << " -> " << endl;

	return 0;
}