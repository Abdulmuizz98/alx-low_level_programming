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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H definition */
