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
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * gog_t - a new type as a new name for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
