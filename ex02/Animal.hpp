#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal& cpy);
		Animal&	operator=(const Animal& src);
		virtual ~Animal();
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif
