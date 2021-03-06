#ifndef DOG_H
#define DOG_H
/**
 * struct dog - create a dog struct
 * @name: reps the name of the dog
 * @age: reps the age of the dog
 * @owner: reps the owner of the dog
 *
 * Description: create a dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcopy(char *dest, char *src);
void free_dog(dog_t *d);
#endif /* DOG_H definition */
