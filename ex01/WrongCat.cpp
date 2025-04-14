#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "A wrong cat has been created." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "A copy of a wrong cat has been created." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << " A wrong cat has been destroyed." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "A wrong cat is making a weird sound." << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->_type);
}
