#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic elements
 * @name: First element (member)
 * @age: Secondelement (member)
 * @owner: Third element (member)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif

