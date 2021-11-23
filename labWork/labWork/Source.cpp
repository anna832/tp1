#include <iostream>
#include <string>
#include <vector>
#include "UniqueNumbers.h"


using namespace std;

bool parseInt(string inputStr, int& n) {
	size_t i = 0;
	if (inputStr[0] == '-')
		++i;
	for (; i < inputStr.size(); i++)
		if (!isdigit(inputStr[i]))
			return false;

	n = atoi(inputStr.c_str());
	return true;
}

int getInt() {
	string str;
	int returnedNumber = 0;
	bool intCheck = false;
	while (!intCheck)
	{
		cin >> str;
		intCheck = parseInt(str, returnedNumber);
		if(!intCheck)
			cout << "Input is incorrect. Try again> ";
	}
	return returnedNumber;
}




int main() {

	cout << "Number of unique numbers in list" << endl;
	cout << "Enter the number of list size: ";
	int vectSize = getInt();
	vector<int> vect(vectSize);
	for (size_t i = 0; i < vect.size(); i++)
	{
		cout << i + 1 << ") ";
		vect[i] = getInt();
	}
	int answer = UniqueN(vect);
	cout << "The number of unique numbers in list is: " << answer << endl;
	return 0;
}