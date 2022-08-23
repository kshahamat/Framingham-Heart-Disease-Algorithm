/Framingham Risk Project

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

//declare variables
vector<string> gender;
vector<int> age;
vector<int> totalCholesterol;
vector<double> HDL;
vector <double> SBP;
vector <string> HTN;
vector <string> smokingStatus;
vector <double> riskDecided;
double risk;

//declare factor set
class FactorSet {
	friend ostream& operator<<(ostream& os, const FactorSet& rhsObj);

	FactorSet* next;

private:
	char gender;

public:
	//all member functions for this class are public   
	FactorSet();
	FactorSet(char gen);
	FactorSet(const FactorSet& rhs);
	string uploadFile(string filename);
	string uploadConsole(string filename);
};


int main()
{
	char userChoice = displayMenu();

	do
	{
		if (userChoice == '1')
		{
			cout << "State the file name";
			string  fileName;
			cin >> fileName;
			uploadFile(fileName, gender, age, totalCholesterol, HDL, SBP, HTN, smokingStatus);
		}

		if (userChoice == '2')
		{
			consoleInput(gender, age, totalCholesterol, HDL, SBP, HTN, smokingStatus, riskDecided);
		}

		if (userChoice == '3')
		{
			FactorSet f1;
			cout << f1;
			//printAll(gender, age, totalCholesterol, HDL, SBP, HTN, smokingStatus, riskDecided);
		}
		/*
				if (userChoice == '4')
				{
					bool success = clearAllVectors(gender, age, totalCholesterol, HDL, SBP, HTN, smokingStatus);
					if (success == true)
						cout << "Clearing was a success.";
					else
						cout << "Vectors did not clear.";
				}
				*///supposed to delete the function
		if (userChoice == '5')
		{
			return 0;
		}

		userChoice = displayMenu();
	}

	while (userChoice != 5);

	if (userChoice == '5')
		return 0;

	system("PAUSE");
};
