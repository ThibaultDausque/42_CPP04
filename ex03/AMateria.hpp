#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& cpy);
		AMateria&	operator=(const AMateria& src);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif
