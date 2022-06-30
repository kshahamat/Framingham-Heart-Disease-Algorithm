//Framingham Risk Project

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
vector <string> risks;
vector <string> calculatedRisk;

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


//Calculate risk based on risk factors using a formula taken directly from the Framingham Heart Foundation
void calculateRisk(string genderInput, int ageInput, double totalCholesterolInput, double HDLInput,
	double SBPInput, string HTN, string SmokingStatus, double risk)
{
	if (genderInput == "m" || genderInput == "M" || genderInput == "male" || genderInput == "Male")
	{
		if (HTN == "y" || HTN == "Y" || HTN == "yes" || HTN == "Yes")
		{
			if (SmokingStatus == "y" || SmokingStatus == "Y" || SmokingStatus == "yes" || SmokingStatus == "Yes")
			{
				if (ageInput > 79)
				{
					risk.operator = (52.00961 * log(ageInput) + (20.014077) * log(totalCholesterolInput) +
						(-0.905964) * log(HDLInput) + (1.305784) * log(SBPInput) + (0.241549) * (1) + (12.096316) * (1) +
						(-4.65038) * log(ageInput) * log(totalCholesterolInput) + (-2.84367) * log(ageInput) * log(79) * (1) +
						(-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
				}
				else
				{
					risk.operator = (52.00961 * log(ageInput) + (20.014077) * log(totalCholesterolInput) + (-0.905964) * log(HDLInput) +
						(1.305784) * log(SBPInput) + (0.241549) * (1) + (12.096316) * (1) + (-4.65038) * log(ageInput) *
						log(totalCholesterolInput) + (-2.84367) * log(ageInput) * (1) + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
				}
			}

			if (SmokingStatus == "n" || SmokingStatus == "N" || SmokingStatus == "no" || SmokingStatus == "No")
			{
				if (ageInput > 79)
				{
					risk.operator = (52.00961)* log(ageInput) + (20.014077) * log(totalCholesterolInput) + (-0.905964) * log(HDLInput)
						+ (1.305784) * log(SBPInput) + (0.241549) * (1) + (12.096316) * 0 + (-4.65038) * log(ageInput) * log(totalCholesterolInput)
						+ (-2.84367) * log(ageInput) * (log(79)) * 0 + (-4.605038) * log(ageInput) * log(totalCholesterolInput + (-2.84367) * log(ageInput)
							* (log(70)) * 0 + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
				}
				else
				{
					risk.operator = (52.00961 * log(ageInput) + (20.014077) * log(totalCholesterolInput) + (-0.905964) * log(HDLInput) + (1.305784)
						* log(SBPInput) + (0.241549) * (1) + (12.096316) * 0 + (-4.65038) * log(ageInput) * log(totalCholesterolInput) + (-2.84367)
						* log(ageInput) * 0 + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
				}
			}
		}
		if (genderInput == "f" || genderInput == "F" || genderInput == "female" || genderInput == "Female")
		{
			if (HTN == "y" || HTN == "Y" || HTN == "yes" || HTN == "Yes")
			{
				if (SmokingStatus == "y" || SmokingStatus == "Y" || SmokingStatus == "yes" || SmokingStatus == "Yes")
				{
					if (ageInput > 79)
					{
						risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) + (-1.187731) * log(HDLInput)
							+ (2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (1) + (-5.060998) * log(ageInput)
							* log(totalCholesterolInput) + (-2.996945) * log(79) * (1) - 146.5933061;
					}
					else
					{
						risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) + (-1.187731) * log(HDLInput) +
							(2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (1) + (-5.060998) * log(ageInput) * log(totalCholesterolInput)
							+ (-2.996945) * log(ageInput) * (1) + (-2.93323) * log(ageInput) * (1) - 146.5933061;
					}

					if (SmokingStatus == "n" || SmokingStatus == "N" || SmokingStatus == "no" || SmokingStatus == "No")
					{
						if (ageInput > 79)
						{
							risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) + (-1.187731)
								* log(HDLInput) + (2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (0) + (-5.060998) * log(ageInput)
								* log(totalCholesterolInput) + (-2.996945) * log(79) * (0) - 146.5933061;
						}
						else
						{
							risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) + (-1.187731)
								* log(HDLInput) + (2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (0) + (-5.060998)
								* log(ageInput) * log(totalCholesterolInput) + (-2.996945) * log(ageInput) * (0) - 146.5933061;
						}
					}
					if (HTN == "n" || HTN == "N" || HTN == "no" || HTN == "No")
					{
						if (SmokingStatus == "y" || SmokingStatus == "Y" || SmokingStatus == "yes" || SmokingStatus == "Yes")
						{
							if (ageInput > 79)
							{
								risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) +
									(-1.187731) * log(HDLInput) + (2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (1) + (-4.65038)
									* log(ageInput) * log(totalCholesterolInput) + (-2.84367) * log(ageInput * (1) + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
							}
							else
							{
								risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) +
									(-1.187731) * log(HDLInput) + (2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (1) + (-4.65038)
									* log(ageInput) * log(totalCholesterolInput) + (-2.84367) * log(ageInput * (1) + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
							}
						}
					}
					if (SmokingStatus == "n" || SmokingStatus == "N" || SmokingStatus == "no" || SmokingStatus == "No")
					{
						if (ageInput > 79)
						{
							risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) + (-1.187731) * log(HDLInput) +
								(2.552905) * log(SBPInput) + (0.420251) * (0) + (13.07543) * (0) + (-4.65038) * log(ageInput) * log(totalCholesterolInput) + (-2.84367) * log(ageInput * (1) + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
						}
						else
						{
							risk.operator = (31.764001)* log(ageInput) + (22.465206) * log(totalCholesterolInput) +
								(-1.187731) * log(HDLInput) + (2.552905) * log(SBPInput) + (0.420251) * (1) + (13.07543) * (1) + (-4.65038) * log(ageInput) * log(totalCholesterolInput) + (-2.84367) * log(ageInput * (1) + (-2.93323) * log(ageInput) * log(ageInput) - 172.300168);
						}
					}
				}
			}
		}
	}
};

//display options to the user. This will allow them to select from a menu and choose how they want to input their 
//demographics to calculate their risk of the heart disease
char displayMenu()
{
	char choice;
	cout << "Choose to do one of the following: \n";
	cout << "1. Input File" << endl;
	cout << "2. Input Console" << endl;
	cout << "3. Display All Risks" << endl;
	cout << "4. Clear All Risks" << endl;
	cout << "5. Exit" << endl;
	cin >> choice;
	return choice;
}



//upload a file with information
void uploadFile(string fileName, vector<string>& gender, vector<int>& age, vector<int>& totalCholesterol,
	vector<double>& HDL, vector<double>& SBP, vector<string>& HTN, vector<string>& smokingStatus)
{
	string genderi;
	int agei;
	int totalCholesteroli;
	double HDLi;
	double SBPi;
	string HTNi;
	string smokingStatusi;
	char comma;

	ifstream infile;
	infile.open(fileName.c_str());

	if (infile)
	{
		while (getline(infile, genderi, ',') && infile >> agei && infile >> comma && infile >>
			totalCholesteroli && infile >> comma && infile >> HDLi && infile >> comma && infile >>
			SBPi && infile >> comma && getline(infile, HTNi, ',') && getline(infile, smokingStatusi))
		{
			bool allValid = true;
			if (genderi != "female" && genderi != "Female" && genderi != "F" && genderi != "f" && genderi
				!= "Male" && genderi != "male" && genderi != "M" && genderi != "m")
			{
				allValid = false;
			}
			if (agei < 20 && agei > 79)
			{
				allValid = false;
			}
			if (totalCholesteroli < 0)
			{
				allValid = false;
			}
			if (HDLi < 0)
			{
				allValid = false;
			}
			if (SBPi < 0)
			{
				allValid = false;
			}
			if (HTNi != "Yes" && HTNi != "yes" && HTNi != "y" && HTNi != "Y" && HTNi != "No" && HTNi != "no" && HTNi != "n" && HTNi != "N")
			{
				allValid = false;
			}
			if (smokingStatusi != "Yes" && smokingStatusi != "yes" && smokingStatusi != "y" && smokingStatusi
				!= "Y" && smokingStatusi != "No" && smokingStatusi != "no" && smokingStatusi != "n" && smokingStatusi != "N")
			{
				allValid = false;
			}
			if ((genderi != "female" && genderi != "Female" && genderi != "F" && genderi != "f" && genderi != "Male" && genderi !=
				"male" && genderi != "M" && genderi != "m") || (agei < 20 && agei > 79) || (HDLi < 0) || (SBPi < 0) ||
				(HTNi != "Yes" && HTNi != "yes" && HTNi != "y" && HTNi != "Y" && HTNi != "No" && HTNi != "no" && HTNi != "n" && HTNi != "N") ||
				(smokingStatusi != "Yes" && smokingStatusi != "yes" && smokingStatusi != "y" && smokingStatusi != "Y" && smokingStatusi
					!= "No" && smokingStatusi != "no" && smokingStatusi != "n" && smokingStatusi != "N"))
			{
				bool allValid = false;
			}
			if (allValid == true)
			{
				gender.push_back(genderi);
				age.push_back(agei);
				totalCholesterol.push_back(totalCholesteroli);
				HDL.push_back(HDLi);
				SBP.push_back(SBPi);
				HTN.push_back(HTNi);
				smokingStatus.push_back(smokingStatusi);
				calculateRisk(genderi, agei, totalCholesteroli, HDLi, SBPi, HTNi, smokingStatusi, risk);
			}
			else if (allValid == false)
			{
				gender.clear();
				age.clear();
				totalCholesterol.clear();
				HDL.clear();
				SBP.clear();
				HTN.clear();
				smokingStatus.clear();
			}
		}
	}
	else
	{
		cout << "Error opening file. ";
	}
};

//input the risk factors to the console
void consoleInput(vector<string>& gender, vector<int>& age, vector<int>& totalCholesterol, vector<double>& HDL,
	vector<double>& SBP, vector<string>& HTN, vector<string>& smokingStatus, vector<double>& riskDecided)
{
	cout << "Input the Risk Factors";
	string genderi;
	string agei;
	string Cholesteroli;
	string HDLi;
	string SBPi;
	string HTNi;
	string smokingStatusi;

	cout << endl << "Enter gender: ";
	cin >> genderi;
	cout << endl << "Enter age: ";
	cin >> agei;
	cout << endl << "Enter Cholesterol: ";
	cin >> Cholesteroli;
	cout << endl << "Enter HDL: ";
	cin >> HDLi;
	cout << endl << "Enter Standard Blood Pressure: ";
	cin >> SBPi;
	cout << endl << "Do you have hypertension? ";
	cin >> HTNi;
	cout << endl << "Do you smoke? ";
	cin >> smokingStatusi;
	cout << genderi << endl;
	cout << agei << endl;
	cout << Cholesteroli << endl;
	cout << HDLi << endl;
	cout << SBPi << endl;
	cout << HTNi << endl;
	cout << smokingStatusi << endl;

	int secondage = stoi(agei);
	int secondCholesterol = stoi(Cholesteroli);
	double secondHDL = atof(HDLi.c_str());
	double secondSBP = atof(SBPi.c_str());

	bool allValid = true;
	if (genderi != "female" && genderi != "Female" && genderi != "F" && genderi != "f" && genderi != "Male" && genderi != "male" && genderi != "M" && genderi != "m")
	{
		allValid = false;
	}

	if (secondage < 20 && secondage > 79)
	{
		allValid = false;
	}

	if (secondCholesterol < 0)
	{
		allValid = false;
	}

	if (secondHDL < 0)
	{
		allValid = false;
	}

	if (secondSBP < 0)
	{
		allValid = false;
	}

	if (HTNi != "Yes" && HTNi != "yes" && HTNi != "y" && HTNi != "Y" && HTNi != "No" && HTNi != "no" && HTNi != "n" && HTNi != "N")
	{
		allValid = false;
	}

	if (smokingStatusi != "Yes" && smokingStatusi != "yes" && smokingStatusi != "y" && smokingStatusi
		!= "Y" && smokingStatusi != "No" && smokingStatusi != "no" && smokingStatusi != "n" && smokingStatusi != "N")
	{
		allValid = false;
	}

	if ((genderi != "female" && genderi != "Female" && genderi != "F" && genderi != "f" && genderi
		!= "Male" && genderi != "male" && genderi != "M" && genderi != "m") || (secondage < 20 && secondage > 79)
		|| (secondCholesterol < 0) || (secondSBP < 0) ||
		(HTNi != "Yes" && HTNi != "yes" && HTNi != "y" && HTNi != "Y" && HTNi != "No" && HTNi != "no" && HTNi != "n" && HTNi != "N") ||
		(smokingStatusi != "Yes" && smokingStatusi != "yes" && smokingStatusi != "y" && smokingStatusi !=
			"Y" && smokingStatusi != "No" && smokingStatusi != "no" && smokingStatusi != "n" && smokingStatusi != "N"))
	{
		allValid = false;
	}

	if (allValid == true)
	{
		gender.push_back(genderi);
		totalCholesterol.push_back(secondCholesterol);
		HDL.push_back(secondHDL);
		SBP.push_back(secondSBP);
		HTN.push_back(HTNi);
		smokingStatus.push_back(smokingStatusi);
		calculateRisk(genderi, secondage, secondCholesterol, secondHDL, secondSBP, HTNi, smokingStatusi, risk);
	}
	else if (allValid == false)
	{
		gender.clear();
		age.clear();
		totalCholesterol.clear();
		HDL.clear();
		SBP.clear();
		HTN.clear();
		smokingStatus.clear();
	}

	if (allValid == true)
	{
		if (allValid == true)
		{
			gender.push_back(genderi);
			age.push_back(secondage);
			totalCholesterol.push_back(secondCholesterol);
			HDL.push_back(secondHDL);
			SBP.push_back(secondSBP);
			HTN.push_back(HTNi);
			smokingStatus.push_back(smokingStatusi);
			calculateRisk(genderi, secondage, secondCholesterol, secondHDL, secondSBP, HTNi, smokingStatusi, risk);
		}
	}
};

//clear all data
bool clearAllVectors(vector<string>& gender, vector<int>& age, vector<int>& totalCholesterol, vector<double>& HDL,
	vector<double>& SBP, vector<string>& HTN, vector<string>& SmokingStatus)
{
	gender.clear();
	age.clear();
	totalCholesterol.clear();
	HDL.clear();
	SBP.clear();
	HTN.clear();
	SmokingStatus.clear();

	if (!gender.empty() || !age.empty() || !totalCholesterol.empty() || !HDL.empty() || !SBP.empty() || !HTN.empty() || !SmokingStatus.empty())
		return false;
	else
	{
		return true;
	}

};

//print all data
void printAll(const vector<string>& gender, const vector<int>& age, const vector<int>& totalCholesterol, const vector<double>& HDL, const vector <double>& SBP,
	const vector <string>& HTN, const vector<string>& smokingStatus, vector<double>& risks)
{
	for (int i = 0; i < (int)gender.size(); i++)

	{
		cout << "Gender: " << gender[i];
		cout << "Age: " << age[i];
		cout << "Total Cholesterol: " << totalCholesterol[i];
		cout << "HDL" << HDL[i];
		cout << "SBP: " << SBP[i];
		cout << "Treatment for Hypertension: " << HTN[i];
		cout << "Smoking Status: " << smokingStatus[i];

		cout << "Risk:  " << risks[i];
	}
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
