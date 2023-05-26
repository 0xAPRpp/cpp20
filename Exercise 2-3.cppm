/*Exercise 2-3. For your birthday you’ve been given a long tape measure and an instrument that
measures angles (the angle between the horizontal and a line to the top of a tree, for instance).
If you know the distance, d, you are from a tree, and the height, h, of your eye when peering
into your angle-measuring device, you can calculate the height of the tree with the formula
h + d*tan(angle). Create a program to read h in inches, d in feet and inches, and angle in
degrees from the keyboard, and output the height of the tree in feet.*/

import <iostream>;
import <format>;
import <numbers>;
import <cmath>;

int main(int argc, char* argv[])
{
	double user_input_height_in_inches{};
	double user_input_distance_in_feet{}, user_input_distance_in_inches{};
	double user_input_angle_in_degrees{}, user_input_angle_in_degrees_copy{};
	const double inches_in_feet{12.0};
	const double half_circle_angle{180};

	std::cin >> user_input_height_in_inches >> user_input_distance_in_feet >> user_input_distance_in_inches
		>> user_input_angle_in_degrees;

	user_input_angle_in_degrees_copy = user_input_angle_in_degrees;

	//converting all to feet
	user_input_height_in_inches /= inches_in_feet;
	user_input_distance_in_feet = user_input_distance_in_feet + (user_input_distance_in_inches / inches_in_feet);

	//converting degrees to radians
	user_input_angle_in_degrees = user_input_angle_in_degrees * (std::numbers::pi / half_circle_angle);

	std::cout << std::format(
		"Height of the tree is {:.4} feet for {:.4} feet height and {:.4} feet distance at {:.4} angle.\n"
		, user_input_height_in_inches + (user_input_distance_in_feet * std::tan(user_input_angle_in_degrees))
		, user_input_height_in_inches, user_input_distance_in_feet, user_input_angle_in_degrees_copy);

	system("pause");
	return 0;
}