//more bitwise operators

import <iostream>;
import <format>;
import <limits>;

int main(int argc, char* argv[])
{
	unsigned short test_value{ std::numeric_limits<unsigned short>::max()};
	unsigned short mask_for_and{ std::numeric_limits<unsigned short>::min() };

	std::cout << std::format(
		"{:<10}: {:<6} | {:<12}: {:<6} | {:<7} {:<18b} : {:<18b} \n", 
		"Original", test_value, 
		"Complement", static_cast<unsigned short>(~test_value), 
		"Binary", test_value, static_cast<unsigned short>(~test_value));

	std::cout << std::format(
		"{:<10}: {:<6} | {:<12}: {:<6} | {:<7} {:<18b} : {:<18b} \n",
		"Original", test_value,
		"AND mask", static_cast<unsigned short>(test_value & mask_for_and),
		"Binary", test_value, static_cast<unsigned short>(test_value & mask_for_and));

	std::cout << std::format(
		"{:<10}: {:<6} | {:<12}: {:<6} | {:<7} {:<18b} : {:<18b} \n",
		"Original", test_value,
		"OR mask", static_cast<unsigned short>(test_value | mask_for_and),
		"Binary", test_value, static_cast<unsigned short>(test_value | mask_for_and));

	std::cout << std::format(
		"{:<10}: {:<6} | {:<12}: {:<6} | {:<7} {:<18b} : {:<18b} \n",
		"Original", test_value,
		"XOR mask", static_cast<unsigned short>(test_value | mask_for_and),
		"Binary", test_value, static_cast<unsigned short>(test_value | mask_for_and));

	system("pause");
	return 0;
}