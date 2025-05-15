#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "a";
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
}

AMateria&	AMateria::operator=(const AMateria& src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

virtual void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use an original attack on " << target.getName() <<std::endl;
}
