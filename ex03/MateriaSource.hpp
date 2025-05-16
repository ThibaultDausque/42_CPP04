#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
#include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		MateriaSource&	operator=(const MateriaSource& src);
		~MateriaSource();
		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif
