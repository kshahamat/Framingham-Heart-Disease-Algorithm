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
