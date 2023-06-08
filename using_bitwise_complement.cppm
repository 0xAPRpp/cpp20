//complement or NOT operator

import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	unsigned short font{ 0b00000110'0'1'0'01100 };
	unsigned short mask_for_bold_italic{ 0b1 };

	std::cout << "Turning the bold bit off" << std::endl;
	std::cout << std::format("{:<25}: {:0>16B}\n", "Original font", font);

	std::cout << std::format("{:<25}: {:0>16B}\n", "Original Mask", mask_for_bold_italic);

	mask_for_bold_italic <<= 5;
	std::cout << std::format("{:<25}: {:0>16B}\n", "Mask for bold", (mask_for_bold_italic));
	std::cout << "complement to the Mask for bold" << std::endl;

	std::cout << std::format("{:<25}: {:016B}\n", "Not Mask for bold", static_cast<unsigned short>(~mask_for_bold_italic));

	std::cout << "Original Mask anding with Not Mask for bold" << std::endl;

	std::cout << std::format("{:<25}: {:016B}\n", "Result Font", (font & (~mask_for_bold_italic)));

	system("pause");
	return 0;
}