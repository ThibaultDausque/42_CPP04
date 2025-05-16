#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(): ICharacter()
{
	int		i;
	this->_name = "toto";
	i = 0;
	while (this->_inventory[i])
		this->_inventory[i++] = NULL;
}

Character::Character(std::string name): _name(name)
{
	int		i;
	this->_name = name;
	i = 0;
	while (this->_inventory[i])
		this->_inventory[i++] = NULL;
}

Character::Character(const Character& cpy)
{
	*this = cpy;
}

Character::~Character()
{

}

Character&	Character::operator=(const Character& src)
{
	int		i;

	i = 0;
	if (this != &src)
	{
		this->_name = src._name;
		while (this->_inventory[i])
		{
			this->_inventory[i] = src._inventory[i];
			i++;
		}
	}
	return (*this);
}

std::string	const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int		i;

	i = 0;
	if (!m)
	{
		std::cout << "No materia equiped." << std::endl;
		return ;
	}
	while (this->_inventory[i])
		i++;
	if (i < 4 && i >= 0)
	{
		std::cout << this->_name << " equiped of a Materia " << m->getType() << std::endl;
		this->_inventory[i++] = m;
		return ;
	}
	else if (i >= 4)
	{
		std::cout << "The inventory of " << this->_name << " is full." << std::endl;
		return ;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		for (int i = idx; i < 3; ++i)
			this->_inventory[i] = this->_inventory[i];
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
	   std::cout << this->_name << " use a Materia." << std::endl;
		this->_inventory[idx]->use(target);
		for (int i = idx; i < 3; ++i)
			this->_inventory[i] = this->_inventory[i];
	}
}





