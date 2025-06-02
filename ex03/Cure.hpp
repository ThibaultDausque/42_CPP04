#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(const Cure& cpy);
		Cure&	operator=(const Cure& src);
		~Cure();
		std::string const & getType() const;
		Cure*	clone() const;
		void	use(ICharacter& target);
};

#endif
