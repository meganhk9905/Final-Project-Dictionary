// Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "dictionary.h"
#include <fstream>
#include <string>


void menu() {
	cout << "======Main Menu======" << endl;
	cout << "1. Search a word up" << endl;
	cout << "2. Quit" << endl;
}
int main(int argc, char *argv[])
{
	dictionary DTN;
	string line;
	string choice;
	string choice1;

	Trie* root = NULL;
	string tempWord;
	string tempMeaning;

	ifstream inFile;
	inFile.open(argv[1]);

	if (inFile.is_open()) {
		while (inFile.peek()) {
			getline(inFile, line, ' ');
			tempWord = line;

			getline(inFile, line, '\n');
			tempMeaning = line;

			DTN.insert(root, tempWord, tempMeaning);
		}
	}
    
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
