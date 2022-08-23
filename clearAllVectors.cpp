#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <math.h>
#include <cmath>

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
