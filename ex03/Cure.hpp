#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure& cpy);
		Cure&	operator=(const Cure& src);
		~Cure();
		Cure*	clone() const;
		void	use(ICharacter& target);
};

#endif
