#ifndef TIME_H
#define TIME_H

// Time class definition
class date
{
public:
	date(int Y, int M, int D); // constructor
	void setTime(int, int, int); // set hour, minute and second
	void printUniversal() const; // print time in universal-time format
	void printStandard() const; // print time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif