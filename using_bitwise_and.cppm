//using the bitwise AND

import <iostream>;
import <format>;

int main()
{
	unsigned short font{0b00000110'0'1'0'01100};
	unsigned short mask_for_size{0b11111};
	unsigned short mask_for_bold_italic{ 0b1 };
	unsigned short mask_for_style{ 0b1111111100000000 };

	//extracting individual components
	std::cout << std::format(
		"{0:<8}: {1:<#18B} = {1:<5}\n", "Size", (font & mask_for_size));
	std::cout << std::format(
		"{0:<8}: {1:<#18B} = {1:<5}\n", "bold", ((font & (mask_for_bold_italic << 5 )) >> 5));
	std::cout << std::format(
		"{0:<8}: {1:<#18B} = {1:<5}\n", "Italic", ((font & (mask_for_bold_italic << 6)) >> 6));
	std::cout << std::format(
		"{0:<8}: {1:<#18B} = {1:<5}\n", "Style", ((font & (mask_for_style)) >> 8));

	system("pause");
	return 0;
}