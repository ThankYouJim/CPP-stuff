#include <iostream>

#include "header.h"
#include "calculator.h"
#include "guessing_game.cpp"
#include "inttoeng.cpp"

using namespace std;

int main(){

	char input;

	cout << "SELECT FUNCTION" << "/n";
	cout << "1. Calculator" << "/n";
	cout << "2. Guessing Game" << "/n";
	cout << "3. Integer into English" << "/n";

	switch (input) {
	case '1':
		Calculator();
	case '2':
		Guess_Game();
	case '3':
		Int_to_Eng();

	default:
		break;
	}

	return 0;
}