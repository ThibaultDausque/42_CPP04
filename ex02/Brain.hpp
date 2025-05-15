#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& src);
};

#endif
