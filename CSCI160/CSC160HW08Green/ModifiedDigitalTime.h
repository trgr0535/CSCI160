//File Name:  DigitalTime.h
//Description:  Lesson 8, Homework Problem 2
//Last Changed: October 2011

//Header file DigitalTime.h: This is the INTERFACE for the class DigitalTime
//  as used in the Homework assignment for the lesson on Exception handling

#include <iostream>
using namespace std;

class DigitalTime
{
public:
	friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);
	//Returns true if time1 and time2 represent the same time;
	//otherwise, returns false.

	DigitalTime(int the_hour, int the_minute);
	//Precondition: 0 <= the_hour <= 23 and 0 <= the_minute <= 59.
	//Initializes the time value to the_hour and the_minute.

	DigitalTime();
	//Initializes the time value to 0:00 (which is midnight).

// *****   Added for Homework 7 Problem 1   *****
	void interval_since(const DigitalTime& previous, int& hours,
		int& minutes) const;
	// Returns the time difference in hours and minutes between
	// a DigitalTime object and a second DigitalTime object that is
	// passed in as a variable

	void advance(int minutes_added);
	//Precondition: The object has a time value.
	//Postcondition: The time has been changed to minutes_added minutes later.

	void advance(int hours_added, int minutes_added);
	//Precondition: The object has a time value.
	//Postcondition: The time value has been advanced
	//hours_added hours plus minutes_added minutes.

	friend istream& operator >>(istream& ins, DigitalTime& the_object);
	//Overloads the >> operator for input values of type DigitalTime.
	//Precondition: If ins is a file input stream, then ins has already been
	//connected to a file.

	friend ostream& operator <<(ostream& outs, const DigitalTime& the_object);
	//Overloads the << operator for output values of type DigitalTime.
	//Precondition: If outs is a file output stream, then outs has already been
	//connected to a file.
private:
	int hour;
	int minute;
};
class DigitalTimeException
{
public:
	DigitalTimeException(int _errornumber, string _errormessage);
	string getmessage(string _message);
	int getnumber(int _number);
private:
	int errorNumber;
	string errorMessage;
};
