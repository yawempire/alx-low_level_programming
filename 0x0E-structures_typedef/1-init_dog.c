#include "dog.h"

/**
  * init_dog - initialization of the type struct dog
  * @d: first argument
  * @name: second argument
  * @age: age to initialize
  * @owner: owner to initialize
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
