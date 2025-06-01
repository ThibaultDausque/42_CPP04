#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "A dog has been created." << std::endl;
	this->_type = "dog";
}

Dog::~Dog()
{
	std::cout << "A dog has been destroyed." << std::endl;
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
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf ! Wouaf !" << std::endl;
}
