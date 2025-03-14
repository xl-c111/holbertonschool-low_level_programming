#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog
 * @name: a pointer to a character array to store dog's name
 * @age: a float to represent dog's age
 * @owner: a pointer to a character array to store name of dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);



#endif
