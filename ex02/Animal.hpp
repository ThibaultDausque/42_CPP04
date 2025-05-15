#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal& cpy);
		Animal&	operator=(const Animal& src);
		virtual ~Animal();
		virtual std::string	getType() const = 0;
		virtual void		makeSound() const;
};

#endif
