#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	*this = cpy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_item[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_item[i];
			this->_item[i] = src._item[i];
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
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
	this->_item[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	return NULL;
}
