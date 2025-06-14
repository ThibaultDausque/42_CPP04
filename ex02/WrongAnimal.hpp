#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:
		std::string	_type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy);
		WrongAnimal&	operator=(const WrongAnimal& src);
		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif
