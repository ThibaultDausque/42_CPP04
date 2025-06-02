#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
}

AMateria::~AMateria()
{

}

AMateria&	AMateria::operator=(const AMateria& src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string const	& AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* use a Materia on " << target.getName() << "." << std::endl;
}
