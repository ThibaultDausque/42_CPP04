#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();
	
	std::cout << std::endl;
	std::cout << "//////ANIMAL//////" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "//////WRONGANIMAL//////" << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << l->getType() << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	delete k;
	delete l;
	delete meta;
	return 0;
}
