#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "wrong animal has been created." << std::endl; 
	this->_type = "wrong animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	std::cout << "wrong animal copy has been created." << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong animal has been deleted." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this == &src)
	{
		this->_type = src._type;
	}
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Animal make a weird sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}
