# include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->_type = "Cure";
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	this->_type = type;
}

Cure::Cure(const Cure& cpy) : AMateria(cpy)
{
	*this = cpy;
}

Cure::~Cure()
{

}

Cure&	Cure::operator=(const Cure& src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

std::string const	& Cure::getType() const
{
	return this->_type;
}

Cure*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
