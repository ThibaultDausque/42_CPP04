#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "A dog has been created." << std::endl;
	this->_type = "dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "A copy of a dog has been done." << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "A dog has been destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf wouf !" << std::endl;
}

