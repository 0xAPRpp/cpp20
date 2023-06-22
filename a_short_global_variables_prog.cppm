//A short Global variables program

import <iostream>;
import <format>;

char var1{ 'c' };

void test_global_variables();

int main(int argc, char* argv[])
{
	int var2{2};

	{
		int var3{3};
		std::cout << var3 << std::endl;
	}

	test_global_variables();

	std::cout << var2 << std::endl;
	


	system("pause");
	return 0;
}

char var2{ 'a' };

void test_global_variables()
{
	int var1{1};
	std::cout << var1 << std::endl;
	std::cout << ::var1 << std::endl;
	std::cout << var2 << std::endl;
}