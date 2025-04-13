#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>

class WrongCat
{
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		~WrongCat();
		operator=(const WrongCat& src);
		void		makeSound() const;
		std::string	getType() const;
}

#endif
