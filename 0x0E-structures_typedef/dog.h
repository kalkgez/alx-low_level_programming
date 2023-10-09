# ifndef DOG_H
# define DOG_H
/**
 * struct dog - A structure that holds an information
 *
 * @name: The first member
 * @age: The second member
 * @owner: The third member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

# endif
