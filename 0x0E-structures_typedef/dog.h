#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info about dog
 * @name: 1st number
 * @age: 2nd number
 * @owner: 3rd number
 *
 * Description: longer descripitn
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /**struct dog - a structure of dog*/
