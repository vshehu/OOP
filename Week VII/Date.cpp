#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int _day;
	int _month;
	int _year;
public:
	void setDay(int day)
	{
		_day = day;
	}
	int getDay()
	{
		return _day;
	}
	void setMonth(int month)
	{
		_month = month;
	}
	int getMonth()
	{
		return _month;
	}
	void setYear(int year)
	{
		_year = year;
	}
	int getYear()
	{
		return _year;
	}
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day;
	}

	void Print(string locale)
	{
		if (locale == "US")
			cout << _month << "/" << _day << "/" << _year;
		else if (locale == "MK")
			cout << _day << "/" << _month << "/" << _year;
		else 
			cout << _year << "/" << _month << "/" << _day;
	}

	Date()
	{
		_year = 0;
		_month = 1;
		_day = 1;
	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	bool Equals(Date d)
	{
		if (_day == d.getDay() && _month == d.getMonth() && _year == d.getYear())
		{
			return true;
		}
		return false;
	}

	bool operator==(Date d)
	{
		if (_day == d.getDay() && _month == d.getMonth() && _year == d.getYear())
		{
			return true;
		}
		return false;
	}

	Date operator--(int)
	{
		if (_day >= 1)
		{
			_day--;
			return Date(_year, _month, _day);
		}
		else
		{
			throw exception("Date cannot be 0");
		}
		
	}
};

int main()
{
	Date d(2016, 11, 1);
	d.Print();
	d--;
	cout << endl;
	d.Print();
}