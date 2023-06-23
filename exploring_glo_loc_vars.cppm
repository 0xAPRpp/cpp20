//Exploring global and auto/local variables

import <iostream>;
import <format>;

int count1{999};
const double count2{3.14};
int count3;

int main()
{
	int count1{10};
	int count3{ 50 };

	std::cout << "Value of outer count1 = " << count1 << std::endl;
	std::cout << "Value of global count1 = " << ::count1 << std::endl;
	std::cout << "Value of global count2 = " << count2 << std::endl;

	{
		int count1{20};
		std::cout << "\nValue of inner count1 = " << count1 << std::endl;
		std::cout << "Value of global count1 = " << ::count1 << std::endl;
		int count2{ 30 };
		std::cout << "Value of inner count2 = " << count2 << std::endl;
		std::cout << "Value of global count2 = " << ::count2 << std::endl;
		count1 = ::count1 + 3;
		std::cout << "\nValue of inner count1 = " << count1 << std::endl;
		count3 += count2;
	}

	::count1++;
	std::cout << "Value of global count1 = " << ::count1 << std::endl;

	std::cout << "\nValue of outer count1 = " << count1 << std::endl;
	std::cout << "Value of outer count3 = " << (count3)  << std::endl;
	std::cout << "Value of global count3= " << ::count3 << std::endl;
	std::cout << "Value of global count2= " << ::count2 << std::endl;


	system("pause");
	return 0;
}