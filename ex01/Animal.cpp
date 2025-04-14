#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal has been created" << std::endl;
	this->_type = "An animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "A copy of an animal has been created." << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "An animal has been destroyed." << std::endl;
}

Animal&	Animal::operator=(const Animal& anim)
{
	if (this != &anim)
		this->_type = anim._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "An animal is making a sound." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
