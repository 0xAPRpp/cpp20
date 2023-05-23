import <iostream>;
import <format>;
import <numbers>;

int main(int argc, char* argv[])
{
	//float values
	std::cout << "float" << std::endl;
	std::cout << std::format("testing 0 preceding width and precision - {:015.2}",std::numbers::pi);
	std::cout << std::format("\ntesting 0 preceding width and precision with + sign - {:+015.2}", std::numbers::pi);
	std::cout << std::format("\ntesting 0 preceding width and precision with - sign - {:015.2}", -std::numbers::pi);
	std::cout << std::format
	("\ntesting fill/align, (0 preceding width) and precision with - sign - {:*^015.2}", -std::numbers::pi);
	std::cout << std::format
	("\ntesting fill/align and precision/format 'f' with - sign - {:+>15.2f}"
		, -std::numbers::pi);
	std::cout << std::format
	("\ntesting fill/align and precision/format 'e' with - sign - {:+>15.2e}"
		, -std::numbers::pi);
	std::cout << std::format
	("\ntesting fill/align and precision/format 'g' with - sign - {:i^15.2g}"
		, -std::numbers::pi);
	std::cout << std::format
	("\ntesting fill/align and precision/format 'a' with - sign - {:-<15.2a}"
		, -std::numbers::pi);

	//int
	std::cout << "\n\nint" << std::endl;
	std::cout << std::format("testing 0 preceding width - {:015}", 1ULL);
	std::cout << std::format("\ntesting 0 preceding width with + sign - {:+015}", 1LL);
	std::cout << std::format("\ntesting 0 preceding width with - sign - {:015}", -1LL);
	std::cout << std::format("\ntesting fill/align and (0 preceding width) with + sign - {:\"<+015}", 1UL);
	std::cout << std::format
	("\ntesting fill/align and format 'b' with - sign - {:\t>+015b}", 100UL);
	std::cout << std::format
	("\ntesting fill/align and format 'x' with - sign - {:\n^+015x}", 100UL);
	std::cout << std::format
	("\ntesting [fill/align][sign][*binary alternate form*][fill 0][width][\"precision\"][type] - {::^+#020b}", 123);
	std::cout << std::format
	("\ntesting [fill/align][sign][*hex alternate form*][fill 0][width][\"precision\"][type] - {::^+#020x}\n", 123);

	//caps
	std::cout << "\n\nCAPS" << std::endl;
	std::cout << std::format("Testing CAPS with scientific formatting {:E}", std::numbers::pi);
	std::cout << std::format("\nTesting CAPS with general formatting {:G}", 2.3e25);
	std::cout << std::format("\nTesting CAPS with float hex formatting {:A}", std::numbers::pi);
	std::cout << std::format("\nTesting CAPS with binary formatting {:#B}", 100);
	std::cout << std::format("\nTesting CAPS with int hex formatting {:#X}", 1000);
	double a{ 100 }, b{ 0 }, c{0};
	std::cout << std::format("\nTesting CAPS with infinity {:E}", c / b);
	std::cout << std::format("\nTesting CAPS with infinity {:F}\n", a/b);

	//char
	std::cout << "\n\nchar" << std::endl;
	//catching an exception
	try
	{
		std::cout << std::format
		("\ntesting [fill/align][\"sign\"][\"alternate form\"][\"fill 0\"][width][\"precision\"][\"type\"] - {:=^20}\n", 'c');
	}
	catch (const std::format_error& error)
	{
		std::cout << error.what();
	}

	std::cout << std::format
	("\ntesting [fill/align][sign][\"alternate form\"][\"fill 0\"][width][\"precision\"][type] - {:=^+20d}, {:=^20b} and {:=^20X}\n", 'c', 'c', 'k');

	//string
	std::cout << "\n\nstring" << std::endl;
	std::cout << std::format
	("\ntesting [fill/align][\"sign\"][\"alternate form\"][\"fill 0\"][width][\"precision\"][type] - {:=^20}", "str");
	std::cout << std::format
	("\ntesting [fill/align][\"sign\"][\"alternate form\"][\"fill 0\"][width][precision][type] - {:=^20.2}\n", "str");

	//bool
	std::cout << "\n\nbool" << std::endl;
	std::cout << std::format
	("\ntesting [fill/align][\"sign\"][\"alternate form\"][fill 0][width][\"precision\"][type] - {:^021B}", true);


	system("pause");
	return 0;
}