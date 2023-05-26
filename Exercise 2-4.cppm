/*Exercise 2-4. Your body mass index (BMI) is your weight, w, in kilograms divided by the square
of your height, h, in meters (w/(h*h)). Write a program to calculate the BMI from a weight
entered in pounds and a height entered in feet and inches. A kilogram is 2.2 pounds, and a foot
is 0.3048 meters.*/

import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	double weight_in_pounds{};
	const double pounds_in_kg{2.2};

	double height_in_feet{}, height_in_inches{};
	const double inches_in_foot{ 12.0 };
	const double meters_in_feet{0.3048};

	std::cin >> weight_in_pounds >> height_in_feet >> height_in_inches;

	//converting
	weight_in_pounds /= pounds_in_kg;
	height_in_feet = height_in_feet + (height_in_inches / inches_in_foot);
	height_in_feet *= meters_in_feet;

	std::cout << std::format(
		"BMI is {:.4f} for weight {:.4f} and height {:.4f}.\n", (weight_in_pounds / (height_in_feet * height_in_feet))
		, weight_in_pounds, height_in_feet);

	system("pause");
	return 0;
}
