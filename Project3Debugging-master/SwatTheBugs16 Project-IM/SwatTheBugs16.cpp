//SwatTheBugs16.cpp - displays the bonus due for sales over $10,000
//Created/revised by Chance Daily on 4-10-2017

#include <iostream>
#include <iomanip>


int main()
{
	//declare named constant and variables
	const double RATE = .1;
	double sales      = 0.0;
	double bonus      = 0.0;

	//enter input
	std::cout << "Enter the sales amount: ";
	std::cin >> sales;

	//display output
	if (sales > 10000)
	{
		bonus = sales * RATE;
		std::cout << std::fixed << std::setprecision(3);
		std::cout << "Bonus: $" << bonus << std::endl;
	}
	else
		std::cout << "Sorry, you do not get a bonus." << std::endl;
	//end if

	
	return 0;
}	//end of main function