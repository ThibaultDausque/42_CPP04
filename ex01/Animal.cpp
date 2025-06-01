#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created." << std::endl;
	this->_type = "animal";
}

Animal::Animal(const Animal& cpy)
{
	std::cout << this->_type << " copy has been created." << std::endl;
	*this = cpy;
}

Animal&	Animal::operator=(const Animal& src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "The animal make a weird noise." << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}
