#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "cat";
	std::cout << "cat has been created." << std::endl;
}

Cat::~Cat()
{
	std::cout << "cat has been destroyed." << std::endl;
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
		this->_type = src._type;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou ! Miaouuu !" << std::endl;
}
