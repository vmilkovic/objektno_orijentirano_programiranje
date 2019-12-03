#pragma once

class Date {
public:
	Date();
	Date(int dan, int mjesec, int godina);
	void setDan(int dan);
	void setMjesec(int mjesec);
	void setGodina(int godina);
	int getDan() const;
	int getMjesec() const;
	int getGodina() const;
	Date operator=(const Date date);
	Date operator+(Date date);
	Date operator++(int);
	Date operator--(int);
	bool operator==(Date);

	void info();
private:
	int dan;
	int mjesec;
	int godina;
};
