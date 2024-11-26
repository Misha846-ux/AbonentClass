#include "Date.h"
#include <iostream>
using namespace std;

void Date::setDay(short new_day) {
	day = new_day;
}

void Date::setMonth(short new_month) {
	month = new_month;
}

void Date::setYear(int new_year) {
	year = new_year;
}

void Date::showDate() {
	cout << day << '.' << month << '.' << year << endl;
}

short Date::getDay() {
	return day;
}

short Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}
