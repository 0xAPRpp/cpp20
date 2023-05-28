import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	int test_value_pos{+104};
	int test_value_neg{-104 };

	std::cout << std::format(
		"{:<+6} {:<30} {:<+}\n", test_value_pos, "after shifting left 2 bits", (test_value_pos << 2));

	std::cout << std::format(
		"{:<+6} {:<30} {:<+}\n", test_value_neg,"after shifting left 2 bits" ,(test_value_neg << 2) );

	std::cout << std::format(
		"{:<+6} {:<30} {:<+}\n", test_value_pos,"after shifting right 2 bits", (test_value_pos >> 2));

	std::cout << std::format(
		"{:<+6} {:<30} {:<+}\n", test_value_neg, "after shifting right 2 bits", (test_value_neg >> 2));

	system("pause");
	return 0;
}