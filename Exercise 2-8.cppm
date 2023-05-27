/*Exercise 2-8. Here’s an extra exercise for puzzle fans. Write a program that will prompt the user
to enter two different positive integers. Identify in the output the value of the larger integer and
the value of the smaller integer. Using the decision-making facilities of Chapter 5, this would
be like stealing a piece of cake from a baby while walking in the park. What makes this a tough
brain teaser, though, is that this can be done solely with the operators you’ve learned about in
this chapter!*/

import <iostream>;

int main(int argc, char* argv[])
{
	int a{}, b{};
	std::cin >> a >> b;

	std::cout << "Larger of the two numbers: "
		<< ((a / b * a) + (b / a * b)) / (a / b + b / a)
		<< std::endl;

	std::cout << "Smaller of the two numbers: "
		<< ((b / a * a) + (a / b * b)) / (a / b + b / a)
		<< std::endl;

	system("pause");
	return 0;
}