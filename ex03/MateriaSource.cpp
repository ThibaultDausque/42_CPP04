#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
	int		i;

	i = 0;
	while (this->_inventory[i])
		this->_inventory[i++] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& cpy): IMateriaSource(cpy)
{
	*this = cpy;
}

MateriaSource::~MateriaSource()
{

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
	
}




