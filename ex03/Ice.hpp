#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(const Ice& cpy);
		Ice&	operator=(const Ice& src);
		~Ice();
		std::string const & getType() const;
		Ice*	clone() const;
		void	use(ICharacter& target);
};

#endif
