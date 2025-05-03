#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal hase been created." << std::endl;
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
	std::cout << this->_type  << " has been destroyed." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << this->_type << " make a sound." << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}
