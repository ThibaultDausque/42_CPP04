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
		virtual std::string	getType() const;
		void		makeSound() const;
};

#endif
