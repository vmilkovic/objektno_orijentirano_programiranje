#include <iostream>
#include "Date.hpp"


Date::Date() : dan(0), mjesec(0), godina(0) {	}
Date::Date(int dan, int mjesec, int godina) {
	setDan(dan);
	setMjesec(mjesec);
	setGodina(godina);
}
void Date::setDan(int dan) {
	if (dan > 0 && dan < 32) {
		this->dan = dan;
	}
	else {
		this->dan = 0;
	}
}
void Date::setMjesec(int mjesec) {
	if (mjesec > 0 && mjesec < 13) {
		this->mjesec = mjesec;
	}
	else {
		this->mjesec = 0;
	}
}
void Date::setGodina(int godina) {
	if (godina > 0) {
		this->godina = godina;
	}
	else {
		this->godina = 0;
	}
}
int Date::getDan() const {
	return dan;
}
int Date::getMjesec() const {
	return mjesec;
}
int Date::getGodina() const {
	return godina;
}
Date Date::operator=(const Date date) {
	this->dan = date.dan;
	this->mjesec = date.mjesec;
	this->godina = date.godina;
	return *this;
}

Date Date::operator+(Date date) {
	Date newDate;
	newDate.dan = dan + date.dan;
	newDate.mjesec = mjesec + date.mjesec;
	newDate.godina = godina + date.godina;
	return newDate;
}
Date Date::operator++(int) {
	dan++;
	if (dan > 31) {
		dan = 1;
		setMjesec(mjesec + 1);
		if (mjesec == 0) {
			mjesec = 1;
		}
		setGodina(godina + 1);
	}

	return *this;
}
Date Date::operator--(int) {
	dan--;

	return *this;
}
bool Date::operator==(Date date) {
	if ((dan == date.dan) && (mjesec == date.mjesec) && (godina == date.godina)) {
		return true;
	}
	else {
		return false;
	}
}


void Date::info() {
	std::cout << dan;
	std::cout << "." << mjesec << ".";
	std::cout << godina << "." << std::endl;
}