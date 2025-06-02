#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_item[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		MateriaSource&	operator=(const MateriaSource& src);
		~MateriaSource();
		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

};

#endif
