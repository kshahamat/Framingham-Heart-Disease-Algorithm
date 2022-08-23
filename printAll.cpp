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
