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
