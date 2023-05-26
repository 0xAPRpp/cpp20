/*Exercise 2-6. Reproduce Table 2-6 with a program*/

/*
Constant            Description                        Approximate Value
std::numbers::e     The base of the natural logarithm  2.71828…
std::numbers::pi    pi                                 3.14159…
std::numbers::sqrt2 Square root of 2                   1.41421…
std::numbers::phi   The golden ratio constant phi      1.618…
*/

import <iostream>;
import <format>;
import <numbers>;

int main()
{
	std::cout << std::format(
		"{:-^86}\n", '-');
	std::cout << std::format(
		"Constant{:20}Description{:30}Approximate Value\n",' ' ,' ');
	std::cout << std::format(
		"{:-^86}\n", '-');
	std::cout << std::format(
		"std::numbers::e{:13}The base of the natural logarithm{:8}{:5f}...\n", ' ', ' ', std::numbers::e);
	std::cout << std::format(
		"std::numbers::pi{:12}pi{:39}{:5f}...\n", ' ', ' ', std::numbers::pi);
	std::cout << std::format(
		"std::numbers::sqrt2{:9}Square root of 2{:25}{:5f}...\n", ' ', ' ', std::numbers::sqrt2);
	std::cout << std::format(
		"std::numbers::phi{:11}The golden ratio constant phi{:12}{:5f}...\n", ' ', ' ', std::numbers::phi);
	std::cout << std::format(
		"{:-^86}\n", '-');



	system("pause");
	return 0;
}