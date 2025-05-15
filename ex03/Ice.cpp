#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice& cpy)
{
	*this = cpy;
}

Ice::~Ice()
{

}

Ice& Ice::operator=(const Ice& src)
{
	if (this != &src)
		this->_type = src._type;
}

Ice*	Ice::clone() const
{
	Ice	*ice = new Ice();

	return (ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
}
