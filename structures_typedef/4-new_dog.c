#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string whose length to be measured
 *
 * Return: length of the string (excluding '\0')
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies the string pointed to by src
 *           including the terminating null byte (\0) to dest
 * @src: pointer to source string
 * @dest: pointer to destination buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: a pointer to a character array that stores new dog's name
 * @age: a float represents new dog's age
 * @owner: a pointer to a character array that stores new dog's owner's name
 * Return: a pointer to the newly allocated dog_t structure
 *         NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)   /* dog_t: a custom data */
{
	/* new_dog is declared as a pointer to store the address of the memory block allocated by malloc */
	dog_t *new_dog = malloc(sizeof(dog_t));  
	{
		if (new_dog == NULL)
		return (NULL);
	}
	/* Allocated memory for the name field of dog_t structure */
	new_dog->name = malloc(_strlen(name) + 1);
	
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
        /* Allocated memory for the owner field of dog_t structure */
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);    /* Copy the input name string into the allocated memory pointed to by new_dog->name */
	_strcpy(new_dog->owner, owner);  /* Copy the input owner string into the allocated memory pointed to by new_dog->owner */
	new_dog->age = age;              /* Assign the input age value to the age field of the new dog_t structure */

	return (new_dog);
}
