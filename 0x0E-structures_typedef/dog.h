#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name - pointer to char name
 * @age - float
 * @owner - pointer to char
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
