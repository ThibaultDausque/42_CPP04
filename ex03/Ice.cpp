# include "Ice.hpp"

Ice::Ice() : AMateria()
{
	this->_type = "Ice";
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	this->_type = type;
}

Ice::Ice(const Ice& cpy) : AMateria(cpy)
{
	*this = cpy;
}

Ice::~Ice()
{

}

Ice&	Ice::operator=(const Ice& src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string const	& Ice::getType() const
{
	return this->_type;
}

Ice*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
