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
