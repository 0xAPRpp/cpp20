import <iostream>;
import <limits>;
import <format>;

int main(int argc, char* argv[])
{
	//float
	std::cout << std::format("Largest positive double value: {}\n",std::numeric_limits<double>::max());
	std::cout << std::format("Smallest positive double value: {}\n", std::numeric_limits<double>::min());
	std::cout << std::format("Smallest negative double value: {}\n", std::numeric_limits<double>::lowest());

	//int
	std::cout << std::format("Largest positive long long int value: {}\n", std::numeric_limits<long long int>::max());
	std::cout << std::format("Smallest long int value: {}\n", std::numeric_limits<long int>::lowest());
	std::cout << std::format("Smallest unsigned long long int value: {}\n", std::numeric_limits<unsigned long long int>::lowest());
	
	system("pause");
	return 0;
}