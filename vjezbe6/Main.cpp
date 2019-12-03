#include <iostream>
#include "Date.hpp"

int main()
{
	Date  date1(31, 12, 2019);
	Date  date2;
	date2 = date1;

	Date  date3(1, 1, 2020);
	Date  date4(1, 0, 0);


	if (date1 == date2) {
		std::cout << "isti su" << std::endl;
	}

	date1++;
	date2--;
	date1.info();
	date2.info();
	Date  date5 = date3 + date4;
	date5.info();
	if (date1 == date2) {
		std::cout << "isti su" << std::endl;
	}
}