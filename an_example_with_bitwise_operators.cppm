//An example with bitwise operators

import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	const unsigned red   {0xFF0000};
	const unsigned white {0xFFFFFF};

	std::cout << "Trying bitwise Complement, And and Or" << std::endl;
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Initial Value", "Red", red);
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Complement", "~Red", ~red);
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Initial Value", "White", white);
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Complement", "~White", ~white);
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Bitwise AND", "Red & White", (red & white));
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n\n", "Bitwise OR", "Red | White", (red | white));

	std::cout << "Trying successive Excl. Or operations" << std::endl;
	std::cout << "Testing the retrieval of one of the elements" << std::endl;
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Mask is", "Red ^ White", (red^white) );
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n", "Retrieve red", "Mask ^ White", ((red ^ white) ^ white));
	std::cout << std::format(
		"{:<15}: {:<12} = {:08X}\n\n", "Retrieve white", "Mask ^ Red", ((red ^ white) ^ red));

	std::cout << "Use masks to select or set a particular flag bit" << std::endl;
	const unsigned int flag{ 0xFF };
	std::cout << std::format(
		"{:<25} = {:08X}\n", "Select bit 1 from flag", (flag & 1u));
	std::cout << std::format(
		"{:<25} = {:08X}\n", "Select bit 6 from flag", (flag & (1u << 5)));
	std::cout << std::format(
		"{:<25} = {:08X}\n", "Switch off bit 6 in flag", (flag & ~(1u << 5)));
	std::cout << std::format(
		"{:<25} = {:08X}\n", "Switch on bit 20 in flag", ((flag & ~(1u << 5)) | (1u << 19)));

	system("pause");
	return 0;
}