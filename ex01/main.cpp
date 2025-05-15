#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Animal*	k;
	const Animal*	tab[100];
	int				count;

	k = i;
	std::cout << j->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	j->makeSound();
	k->makeSound();
	i->makeSound();

	count = 0;
	while (count < 50)
	{
		tab[count] = new Cat();
		count++;
	}
	while (count < 100)
	{
		tab[count] = new Dog();
		count++;
	}
	
	delete j;//should not create a leak
	delete k;
	count = 0;
	while (count < 100)
		delete tab[count++];
	return 0;
}
