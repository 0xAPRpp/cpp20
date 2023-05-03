import <iostream>;

int main(int argc, char* argv[])
{
	double a{ 100.0 }, b{ }, c{}, result{ a/b };
	std::cout << result << std::endl;
	//it won't work if you use literals or make these variables const
	std::cout << result + a << std::endl;
	std::cout << result * a << std::endl;
	std::cout << result/a << std::endl;
	std::cout << result/result << std::endl;
	std::cout << b/c << std::endl;
	std::cout << result-result << std::endl;
	std::cout << result * 0 << std::endl;

	system("pause");
	return 0;
}