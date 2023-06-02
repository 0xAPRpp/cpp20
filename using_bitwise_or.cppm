//using the bitwise OR

import <iostream>;
import <format>;

int main(int argc, char* argv[])
{
	unsigned short font{ 0b00000110'0'1'0'01100 };
	unsigned short mask_for_bold_italic{ 0b1 };

	//setting bold and italic to 1
	std::cout << std::format(
		"{0:<27}: {1:<#18B} = {1:<5}\n", "Original", font );
	std::cout << std::format(
		"{0:<27}: {1:<#18B} = {1:<5}\n", "Setting bold On", ((font | (mask_for_bold_italic << 5))));
	std::cout << std::format(
		"{0:<27}: {1:<#18B} = {1:<5}\n", "Setting Italic On", ((font | (mask_for_bold_italic << 6))));
	std::cout << std::format(
		"{0:<27}: {1:<#18B} = {1:<5}\n", "Setting bold and Italic On", ((font | (mask_for_bold_italic << 6)) | (mask_for_bold_italic << 5)));

	system("pause");
	return 0;
}