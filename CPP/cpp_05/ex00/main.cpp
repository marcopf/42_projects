#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat sig1("marco", 110);

	std::cout << sig1;
	for (int i = 0; i < 30; i++)
	{
		sig1.increment_grade();
	}
	std::cout << "incrementing grade\n";
	std::cout << sig1;
	for (int i = 0; i < 70; i++)
	{
		sig1.decrement_grade();
	}
	std::cout << "decrementing grade\n";
	std::cout << sig1;
	sig1.decrement_grade();
	for (int i = 0; i < 149; i++)
	{
		sig1.increment_grade();
	}
	std::cout << sig1;
	sig1.increment_grade();

}