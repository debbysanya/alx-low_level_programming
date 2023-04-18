#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog for name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This is a new type that has the following elements
 * name, age and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
