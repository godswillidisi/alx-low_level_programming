#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
 * struct dog - A struct dog with name, age and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog 8d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age,char *owner);
void free_dog(dog_t *d);
#endif
