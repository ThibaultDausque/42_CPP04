#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "A dog has been created with a big brain." << std::endl;
	this->_type = "dog";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "A dog has been destroyed." << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	std::cout << "A copy of a Dog has been done." << std::endl;
	*this = cpy;
}

Dog&	Dog::operator=(const Dog& src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain();
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Wouf ! Wouf !" << std::endl;
}

std::string	Dog::getType() const
{
	return this->_type;
}
