#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string	_type;
		Brain		*_brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog& cpy);
		Dog&	operator=(const Dog& cpy);
		void		makeSound() const;
		std::string	getType() const;
};

#endif
