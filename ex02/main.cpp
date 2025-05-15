#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <Animal.hpp>

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Animal*	k;

	k = i;
	std::cout << j->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	j->makeSound();
	k->makeSound();
	i->makeSound();
	
	delete j;//should not create a leak
	delete k;
	return 0;
}
