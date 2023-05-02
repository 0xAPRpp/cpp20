//Converting distances //Don't add comments that are already documented
import <iostream>;

int main(int argc, char* argv[])
{
	float yards{}, feet{}, inches{}; //float is faster
	const float inches_in_feet{ 12 }; //use const for values that don't change 
	const float inches_in_yards{ 36 };

	//calculating inches
	std::cin >> yards >> feet >> inches;
	inches += (feet * inches_in_feet) + (yards * inches_in_yards);
	
	std::cout << inches << std::endl;

	//Extracting yards, feet and inches
	std::cin >> inches;
	yards = inches / inches_in_yards;
	feet = ((yards - static_cast<unsigned>(yards)) * inches_in_yards) / inches_in_feet;
	inches = (feet - static_cast<unsigned>(feet)) * inches_in_feet;

	std::cout << static_cast<unsigned>(yards) <<", "<< static_cast<unsigned>(feet) <<" and " << inches << std::endl;

	system("pause");
	return 0;
}