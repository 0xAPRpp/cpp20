//testing short conversion to int during expression evaluation

import <iostream>;
import <format>;
import <limits>;

int main(int argc, char* argv[])
{
	signed short test_value_signed_max{ std::numeric_limits<signed short>::max() };
	signed short test_value_signed_min{ std::numeric_limits<signed short>::min() };
	signed short test_value_negative{-5};

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n","signed short max value", test_value_signed_max, test_value_signed_max, sizeof(test_value_signed_max));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n","signed short min value" ,test_value_signed_min, test_value_signed_min, sizeof(test_value_signed_max));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "unsigned short max value", std::numeric_limits<unsigned short>::max(), std::numeric_limits<unsigned short>::max(), sizeof(std::numeric_limits<unsigned short>::max()));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "unsigned short min value", std::numeric_limits<unsigned short>::min(), std::numeric_limits<unsigned short>::min(), sizeof(std::numeric_limits<unsigned short>::min()));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding +1 int to max", test_value_signed_max + 1, test_value_signed_max + 1, sizeof(test_value_signed_max + 1));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding +1 int to sign short value -5", test_value_negative + 1, test_value_negative + 1, sizeof(test_value_negative + 1));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding +1 int to max and cast sign short", static_cast<short>(test_value_signed_max + 1), static_cast<short>(test_value_signed_max + 1), sizeof(static_cast<short>(test_value_signed_max + 1)));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding +1 int to max and cast unsign short", static_cast<unsigned short>(test_value_signed_max + 1), static_cast<unsigned short>(test_value_signed_max + 1), sizeof(static_cast<unsigned short>(test_value_signed_max + 1)));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding 32767 to max and cast unsign short", static_cast<unsigned short>(test_value_signed_max + 32767), static_cast<unsigned short>(test_value_signed_max + 32767), sizeof(static_cast<unsigned short>(test_value_signed_max + 32767)));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding 32768 to max and cast unsign short", static_cast<unsigned short>(test_value_signed_max + 32768), static_cast<unsigned short>(test_value_signed_max + 32768), sizeof(static_cast<unsigned short>(test_value_signed_max + 32768)));

	std::cout << std::format(
		"{:<45}: {:<+8} | Binary: {:<+20b} | Size:{}\n", "Adding 32769 to max and cast unsign short", static_cast<unsigned short>(test_value_signed_max + 32769), static_cast<unsigned short>(test_value_signed_max + 32769), sizeof(static_cast<unsigned short>(test_value_signed_max + 32769)));

	system("pause");
	return 0;
}