#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain has been created" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "A copy of a brain has been created." << std::endl;
	*this = cpy;
}

Brain::~Brain()
{
	std::cout << "A brain has been destroyed." << std::endl;
}

Brain&	Brain::operator=(const Brain& src)
{
	if (this != &src)
		this->ideas = src.ideas;
	return (*this);
}
