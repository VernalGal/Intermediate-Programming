#include<iostream>
#include<string>
using namespace std;

bool LeapYear(int a);
int days_month(int &month, int &year);
void days_year(int &year, int &value);
void days_week(int& day, string& daily, int& value);


int main()
{
	int value = 0;
	int month;
	int day;
	int year;
	string dayname = " ";
		cout << "Enter month: " << endl;
	cin >> month;
	cout << "Enter day: " << endl;
	cin >> day;
	cout << "Enter year: " << endl;
	cin >> year;
	days_year(year, value);
	days_month(month, year);
	days_week(day, dayname, value);

	cout << dayname << " " << month << "  " << day << "  " << year << " has a numeric value of " << value << endl;

return 0;
}


bool LeapYear(int a)
{
	if (a % 4 == 0)
	{
		if (a % 100 == 0)
		{
			if (a % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}

int days_month(int& month, int& year)
{

	switch (month)
	{
	case 2:
		
		if (LeapYear(year))
			return 29;
		else
			return 28;

		
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	Equals:
		return 31;
	}
}



void days_year(int& year, int& value)
{

	for (int i = 1900; i < year; i++)
	{
		if (LeapYear(i))
		{
			value += 366;
		}
		else
		{
			value += 365;
		}
	}
}
	
	
	void days_week(int& day, string & daily, int& value)
	{
		switch (value % 7)
		{
		case 0:
			daily = "Sunday";
			break;
		case 1:
			daily = "Monday";
			break;
		case 2:
			daily = "Tuesday";
			break;
		case 3:
			daily = "Wednesday";
			break;
		case 4:
			daily = "Thursday";
			break;
		case 5:
			daily = "Friday";
			break;
		case 6:
			daily = "Saturday";
			break;

		}
	}


	