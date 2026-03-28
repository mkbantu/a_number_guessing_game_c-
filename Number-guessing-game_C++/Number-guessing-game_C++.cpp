// Number-guessing-game_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;


int main()
{
    std::cout << "Hello World!\n";
	int to_be_guessed= rand() % 100 + 1;
	int number;
	int attempts = 5;
	
	for (int i = 0; i <= attempts;i++) {
		cout << "this is the guessing A Number game where you have to guess a number between 1 and 100 in " << attempts << " attempts" << endl;
		cout << "Enter your guess: ";
		cin >> number;
		if (to_be_guessed == number) {
			cout << "Congratulations! You guessed the number!" << endl;
			break;
		}
		else if(to_be_guessed<number){
			cout << "The number is too high than your guess. Try again." << endl;

			}
		else {
			cout << "The number is too low than your guess. Try again." << endl;
		}







	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
