#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
	int		i;

	i = 0;
	while (i < 4)
		this->_inventory[i++] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& cpy): IMateriaSource(cpy)
{
	*this = cpy;
}

MateriaSource::~MateriaSource()
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		i++;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	int		i;

	i = 0;
	if (this != &src)
	{
		while (this->_inventory[i])
		{
			this->_inventory[i] = src._inventory[i];
			i++;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int		i;

	i = 0;
	while (this->_inventory[i])
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than four materia." << std::endl;
		return ;
	}
	else
		this->_inventory[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int		i;

	if (type != "cure" && type != "ice")
	{
		std::cout << "unknown type" << std::endl;
		return (0);
	}
	i = 0;
	while (this->_inventory[i] && this->_inventory[i]->getType() != type && i < 4)
		i++;
	if (i > 4 || this->_inventory[i]->getType() != type)
	{
		std::cout << "Materia doesn't exist" << std::endl;
		return (0);
	}
	return (this->_inventory[i]->clone());
}


