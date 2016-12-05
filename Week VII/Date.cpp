



///author ervin shaqiri 124384

/// rdate.h file a header file and its class

#include <iostream>
#include <string>

using namespace std;

#ifndef   rdate_h
#define   rdate_h

class date
{
	private:
		int _date;
		int _month;
		int _year;
	public:
		int getdate()
		{
			return _date;
		};
		void setdate(int date)
		{
			_date = date;
		};
		int getyear()
		{
			return _year;
		};
		void setyear(int year)
		{
			_year = year;
		};
		int getmonth()
		{
			return _month;
		};
		void setmonth(int month)
		{
			_month = month;
		};
		void printdate(string locale);
		date()
		{
			_date = 1;
			_year = 0;
			_month = 1;
		}
		date :: date(int date, int year, int month)
		{
			_date = date;
			_year = year;
			_month = month;
		};
		bool equals(date d)
		{
			if(_date == d.getdate() && _year == d.getyear() && _month == d.getmonth())
				return true;
			else 
				return false;
		};
		bool operator==(date d)
		{
			if(_date == d.getdate() && _year == d.getyear() && _month == d.getmonth())
				return true;
			else 
			{
				return false;
			};
		date operator++(int date, int year, int month)
		{
			if (_day == 31 && _month == 12)
			{
				_year++;
				_day = 1;
				_month = 1;
			};
			if((_month == 1 || _month == 3 || _month == 5 || _month ==  7 || _month == 8 || _month == 10 || _month == 12) && _date == 31)
			{
				_month++;
				_date = 1;
				return date(int date, int year, int month);
			};
			else
			{
				_date++;
				return date(int date,int year, int month);
			};
			if((_month == 4 || _month == 6 || _month == 9 || _month == 11) && _day == 30)
			{
				_month++;
				_date = 1;
				return date(int date, int year, int month);
			};
			if(_year%4 ==  0)
			{
				if(_day == 28)
				{
					_month+;
					_date = 1;
					return date(int date, int year, int month);
				};
				else
				{
					_date++;
					return date(int date, int year, int month);
				};
			};
			else 
			{
				if(_date == 27)
				{
					_month++;
					_date = 1;
					return date(int date, int year, int month);
				};
				else
				{
					_date ++;
					return date(int date, int yaer, int month);
				};
			};
		};
		date operator--(int date, int year, int month)
		{
			if(_month == 1 && _day == 1)
			{
				_year--;
				_day = 31;
				_month = 12;
			};
			if((_month == 2 || _month == 4 || _month == 6 || _month == 9 || _month == 11) && _day == 1)
			{
				_day = 31;
				_month--;
			};
			else if(_month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12 && _day== 1)
			{
				_day = 30;
				_month--;
			};
			else if(_year%4 == 0)
			{
				if(_month == 3 && _day==1)
				{
					_day = 28;
					_month--;
				};
				else
				{
					_day = 27;
					_month--;
				};
			};
		}
		date operator +(const date &p);
		{
			date date;
			date._year = this.->_year + p.getyear();
			date._day = this.->_day + p.getyear();
			date._month = this.->_month + p.getmonth();
		};
       date operator -(const date &p)
       {
		date date;
		date._year = this-> _year - p.getyear();
		date._day = this-> _day - p.getyear();
		date._month = this-> _month - p.getmonth();
	   };
	    date operator >(const date &p)
	    {
				date date;		 	
				if(this.->_year > p.getyear())
					return date.setyear()=_year;
				else
					return date.setyear()= p._year;
				if(this.->_day > p.getday())
					return date.setday() = _day;
				else
					return date.setmonth() = p._day;
				if (this.->date._month > p.getmonth())
					return date.setmonth() = _month;
				else
					return date.setmonth() = p._month;
	    };
		date operator <(const date &p)
		{
				date date;
				if(this.->_year < p.getyear())
					return date.setyear() = p.getyear();
				else
					return date.setyear() = _year;
				if(this.->_day < p.getday())
					return date.setday() = p.getday();
				else
					return date.setday() = _day;
				if(this.->_month < p.getmoth)
					return date.setmonth() = p.getmonth;
				else 
					return date.setmonth() = _month;
		};
	};
};

#endif

/// cpp file for rdate.h.

#include <iostream>
#include <string>
#include "rdate.h"

using namespace std;
void date :: printdate(string locale)
{
	if(locale =="us")
		cout << getdate() << "/" << getmonth() << "/" << getyear() << endl;
	else if (locale == "mk")
		cout << getmonth() << "/" << getyear() << "/" << getdate() << endl;
	else
		cout << getmonth() << "/" << getyear() << "/" << getdate() << endl;
};
int date :: date operator +

/// main file.
#include <iostream>
#include <string>
#include "rdate.h"

using namespace std;

int main()
{
	date p;
	string locale = "us";
	p.setdate(0);
	p.setyear(0);
	p.setmonth(0);
	p.printdate(locale);
	system("pause");
	return 0;
};
