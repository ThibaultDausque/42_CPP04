#include "Character.hpp"

Character::Character() : ICharacter()
{
	this->_name = "toto";
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

Character::Character(std::string _name)
{
	this->_name = _name;
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

Character::Character(const  Character& cpy) : ICharacter(cpy)
{
	*this = cpy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_item[i];
}

Character&	Character::operator=(const Character& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			delete this->_item[i];
			this->_item[i] = src._item[i];
		}
	}
	return *this;
}

std::string const	& Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	int		i;

	i = 0;
	while (this->_item[i])
		i++;
	if (i >= 4)
	{
		std::cout << "* Inventory is full *" << std::endl;
		return ;
	}
	else
	{
		this->_item[i] = m;
		std::cout << "* Materia of type " << m->getType() << " equiped." << std::endl;
		return ;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "* Inventory index doesn't exist *" << std::endl;
		return ;
	}
	for (int i = idx; i < 4; i++)
		this->_item[i] = this->_item[i + 1];
	std::cout << "* Item unequiped *" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "* Inventory index doesn't exist *" << std::endl;
		return ;
	}
	std::cout << "* " << this->_name <<" used a " << this->_item[idx]->getType()
		<< " on " << target.getName() << " *" << std::endl;
}
