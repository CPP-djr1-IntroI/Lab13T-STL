//***********************************************************************
// File name:			main.cpp
// Author:				CS, Pacific University
// Date:					
// Class:					Intro to CS I
// Assignment:		Lab13
// Purpose:				To read a simple dictionary into an array of structs
// Hours:
//**********************************************************************
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct Word {
	string mWord;
	string mDefinition;
	string mExampleUsage;

	// Allows two Words to be compared using ==. This is an example of
	// operator overloading and will be covered much later.
	bool operator== (const Word &sWord) {
		return mWord == sWord.mWord;
	}
};

void readWord (ifstream &inFile, Word &sWord);

void readAllWords (vector<Word> &sWords, string fileName);

void displayWord (const Word &sWord);

void displayAllWords (const vector<Word> &sWords);

void removeWord (vector<Word> &sWords, const Word &sWord);

/***********************************************************************
Function:			main

Description:	A simple driver that shows the use of a simple dictionary.

Parameters:		None

Returned:			return status
***********************************************************************/
int main () {
	const string FILE_NAME = "dictionary.txt";
	const Word SODIUM = { "sodium", "", "" };
	const Word COMPUTER = { "computer", "", "" };
	const Word CABBAGE = { "cabbage", "", "" };
	const Word NO_WORD = { "", "", "" };

	vector<Word> sWords;

	//readAllWords (sWords, FILE_NAME);
	//displayAllWords (sWords);
	//cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
	//removeWord (sWords, SODIUM);
	//displayAllWords (sWords);
	//cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
	//removeWord (sWords, COMPUTER);
	//displayAllWords (sWords);
	//cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
	//removeWord (sWords, CABBAGE);
	//displayAllWords (sWords);
	//cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
	//removeWord (sWords, CABBAGE);
	//displayAllWords (sWords);

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			readWord

Description:	Reads a single word's information from an open file. The
							word, defintion, and usage are each on a separate line in
							the file. getline accepts an open file reference and
							a string variable. Characters up until the newline
							character (or end of file) are read into the string
							variable. The newline character is removed from the
							stream.

Parameters:		inFile - stream to use for data input
							sWord	 - the word to be read

Returned:			None
***********************************************************************/
void readWord (ifstream &inFile, Word &sWord) {
	getline (inFile, sWord.mWord);
	getline (inFile, sWord.mDefinition);
	getline (inFile, sWord.mExampleUsage);
}

/***********************************************************************
Function:			readAllWords

Description:	Reads each word from the dictionary one at a time using
							the function readWord.
							HINT: If the end of file is reached in readWord, you can
										check this condition using inFile.eof (). If the
										function returns true; there is no more data in
										the file.

Parameters:		sWords	 - the array of words
							numWords - number of words in the array
							fileName - name of text file to open and read from

Returned:			None
***********************************************************************/
void readAllWords (vector<Word> &sWords, string fileName) {

}

/***********************************************************************
Function:			displayWord

Description:	Displays a single word's information from the dictionary

Parameters:		sWord	 - the word to be displayed

Returned:			None
***********************************************************************/
void displayWord (const Word &sWord) {

}

/***********************************************************************
Function:			displayAllWords

Description:	Outputs a single word's information from the dictionary

Parameters:		sWords	 - the array of words
							numWords - number of words in the array

Returned:			None
***********************************************************************/
void displayAllWords (const vector<Word> &sWords) {

}

/***********************************************************************
Function:			removeWord

Description:	Removes a word from the dictionary if it exists. If the
							word does not exist, do nothing.

Parameters:		sWords	 - the array of words
							numWords - number of words in the array
							sWord		 - word to be removed if it exists

Returned:			None
***********************************************************************/
void removeWord (vector<Word> &sWords, const Word &sWord) {

}