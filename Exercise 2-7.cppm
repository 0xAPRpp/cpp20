/*Exercise 2-7. Add a row to your table of Exercise 2-6 for sin(π/4), showing the result with
exponent notation and five digits after the decimal point. Make sure the exponent component
begins with a capital E, not a lowercase e.*/

import <iostream>;
import <format>;
import <numbers>;
import <cmath>;

int main()
{
	std::cout << std::format("{:-^80}\n", ' ');
	std::cout << std::format("{:<22}{:<40}{:<20}\n", "Constant", "Description", "Approximate Value");
	std::cout << std::format("{:-^80}\n", ' ');
	std::cout << std::format(
		"{:<22}{:<40}{:<.5f}...\n", "std::numbers::e", "The base of the natural logarithm", std::numbers::e);
	std::cout << std::format(
		"{:<22}{:<40}{:<.5f}...\n", "std::numbers::pi", "pi", std::numbers::pi);
	std::cout << std::format(
		"{:<22}{:<40}{:<.5f}...\n", "std::numbers::sqrt2", "Square root of 2", std::numbers::sqrt2);
	std::cout << std::format(
		"{:<22}{:<40}{:<.5f}...\n", "std::numbers::phi", "The golden ratio constant phi", std::numbers::phi);
	std::cout << std::format(
		"{:<22}{:<40}{:<.5E}...\n", "sin(pi/4)", "exponent notation", std::sin(std::numbers::pi/4));

	system("pause");
	return 0;
}