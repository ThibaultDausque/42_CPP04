#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal&			operator=(const Animal& anim);
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	_type;
};

#endif
