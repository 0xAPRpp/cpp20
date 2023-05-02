import <iostream>;
import <numbers>;
import <cmath>;

int main(int argc, char* argv[])
{
	double fish_length{}, fish_count{};
	const double inches_in_feet{ 12.0 };
	const double area_factor{ 2.0 / 0.5 }; //2 sq feet for every 0.5 feet of fish

	std::cin >> fish_length >> fish_count;

	const double pond_area{(fish_length/inches_in_feet) * fish_count * area_factor};

	//calculating the pond diameter
	const double pond_diameter{2.0 * std::sqrt(pond_area / std::numbers::pi)};

	std::cout << pond_diameter << std::endl;

	system("pause");
	return 0;
}