#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << "Destructor Animal\n";
}

Animal	&Animal::operator=(Animal const &other)
{
	std::cout << "Assignement operator\n";
	this->type = other.getType();
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "ANIMAL SOUND\n";
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}