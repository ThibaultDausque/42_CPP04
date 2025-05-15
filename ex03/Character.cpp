#include "Character.hpp"

Character::Character(): ICharacter()
{
	this->_name = "toto";
}

Character::Character(const Character& cpy)
{
	*this = cpy;
}

Character::~Character()
{

}

int	count_materia(AMateria* inventory)
{
	int		i;

	i = 0;
	while (inventory[i])
		i++;
	return (i);
}

Character&	Character::operator=(const Character& src)
{
	if (this != &src)
		this->_name = src._name;
	return (*this);
}

std::string	const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "No materia equiped." << std::endl;
		return ;
	}
	
	if (count_materia(this->_inventory) < 4 && >= 0)
	{
		std::cout << this->_name << " equiped of a Materia " << m.getType() << std::endl;
		return ;
	}
	else
	{
			
	}
}
