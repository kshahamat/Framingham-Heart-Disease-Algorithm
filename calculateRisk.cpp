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
