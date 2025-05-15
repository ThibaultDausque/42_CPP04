#include "Brain.hpp"

Brain::Brain()
{
	int		i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = "brain new idea";
		i++;
	}
	std::cout << "brain with 100 ideas has been created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "brain has been destroyed." << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "copy of brain has been done." << std::endl;
	*this = cpy;
}

Brain&	Brain::operator=(const Brain& src)
{
	int		i;
	
	i = 0;
	if (this != &src)
	{
		while (i < 100)
		{
			this->_ideas[i] = src._ideas[i];
			i++;
		}
	}
	return *this;
}
