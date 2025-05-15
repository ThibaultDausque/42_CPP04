#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string _type;

	public:
		WrongCat();
		WrongCat(const WrongCat& cpy);
		~WrongCat();
		WrongCat&	operator=(const WrongCat& src);
		std::string	getType() const;
		void		makeSound() const;
};

#endif
