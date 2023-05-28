//Bitwise shift operator

import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	signed short test_value{16387};

	std::cout << std::format("{:<20}: {:10} | Binary: {:<40B}\n", "Original", test_value, test_value);
	std::cout << std::format("{:<20}: {:10} | Binary: {:<40B}\n", "Shift Left 2 bits", static_cast<unsigned short>(test_value << 2), static_cast<unsigned short>(test_value << 2));
	std::cout << std::format("{:<20}: {:10} | Binary: {:<40B}\n", "Shift right 2 bits", static_cast<unsigned short>(test_value >> 2), static_cast<unsigned short>(test_value >> 2));

	system("pause");
	return 0;
}