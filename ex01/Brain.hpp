#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain& cpy);
		Brain&	operator=(const Brain& src);
		~Brain();
};

#endif
