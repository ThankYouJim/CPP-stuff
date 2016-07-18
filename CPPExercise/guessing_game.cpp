//#include <stdlib.h>
//#include <iostream>
//
//using namespace std;
//int main()
//{
//	// number in the rang of 0 to 50
//	int number = rand() % 51;
//	int guess = -1;
//	int trycount = 0;
//	while (guess != number && trycount < 8)
//	{
//		cout << "Please enter a guess: ";
//		cin >> guess;
//		if (guess < number)
//			cout << "Too low" << endl;
//		else if (guess > number)
//			cout << "Too high" << endl;
//		trycount++;
//	}
//
//	if (guess == number)
//		cout << "You guessed da number.";
//	else
//		cout << "Sorry, da number was: " << number << endl;
//	return 0;
//}