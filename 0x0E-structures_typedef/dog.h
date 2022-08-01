#define DOG_H
#ifndef DOG_H

/**
 * struct dog - defines the structure
 * @name: name of dog
 * @age: age of dog
 * @owner: who is the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
