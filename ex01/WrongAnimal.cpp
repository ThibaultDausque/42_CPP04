#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A wrong animal has been created." << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "A copy of a wrong animal has been created" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong animal has been destroyed." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "A wrong animal is making a sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

