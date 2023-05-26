/*Exercise 2-1. Create a program that converts inches to feet and inches. In case you’re
unfamiliar with imperial units: 1 foot equals 12 inches. An input of 77 inches, for instance,
should thus produce an output of 6 feet and 5 inches. Prompt the user to enter an integer value
corresponding to the number of inches and then make the conversion and output the result.*/

import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	const unsigned int inches_in_foot{ 12 };
	int user_input_inches{};

	std::cin >> user_input_inches;

	std::cout << std::format(
		"{1:<2}feet and{2:^3}inches is the same as {0:^3}inches.\n"
		,user_input_inches, user_input_inches/ inches_in_foot, user_input_inches % inches_in_foot);

	system("pause");
	return 0;
}