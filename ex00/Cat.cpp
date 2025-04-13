#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "A cat has been created." << std::endl;
	this->_type = "cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "A copy of a cat has been done." << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "A cat has been destroyed." << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	if (this != &cat)
		this->_type = cat._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou miaou !" << std::endl;
}

