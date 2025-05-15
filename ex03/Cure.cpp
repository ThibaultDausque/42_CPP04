#include "Cure.hpp"

Cure::Cure(): AMateria()
{
	this->_type = "cure";
}

Cure::Cure(const Cure& cpy): AMateria(cpy)
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
	return (*this);
}

Cure*	Cure::clone() const
{
	Cure	*cure = new Cure();

	return (cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "
		<< target.getName() << "'s wounds *" << std::endl;
}
