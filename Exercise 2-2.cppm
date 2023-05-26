/*Exercise 2-2. Write a program that will compute the area of a circle. The program should
prompt for the radius of the circle to be entered from the keyboard. Calculate the area using
the formula area = pi * radius * radius, and then display the result.*/

import <iostream>;
import <format>;
import <numbers>;

int main(int argc, char* argv[])
{
	double user_input_radius{};

	std::cin >> user_input_radius;

	std::cout << std::format(
		"Area for radius {:^.4f} is {:^.4f}.\n"
		, user_input_radius, (std::numbers::pi * user_input_radius * user_input_radius));		

	system("pause");
	return 0;
}