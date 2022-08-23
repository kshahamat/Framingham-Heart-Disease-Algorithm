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
