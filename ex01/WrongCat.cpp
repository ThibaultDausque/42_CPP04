#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "wrong cat has been created." << std::endl; 
	this->_type = "wrong cat";
}

WrongCat::WrongCat(const WrongCat& cpy)
{
	std::cout << "wrong cat copy has been created." << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat()
{
	std::cout << "wrong cat has been deleted." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	if (this == &src)
	{
		this->_type = src._type;
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "wrong cat make a wrong sound." << std::endl;
}
