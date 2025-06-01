#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "cat";
	this->_brain = new Brain();
	std::cout << "cat has been created with a big brain." << std::endl;
}

Cat::~Cat()
{
	std::cout << "cat has been destroyed." << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	*this = cpy;
	std::cout << "A cat copy has been done." << std::endl;
}

Cat&	Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		delete	this->_brain;
		this->_type = src._type;
		this->_brain = new Brain();
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow ! Meow !" << std::endl;
}
