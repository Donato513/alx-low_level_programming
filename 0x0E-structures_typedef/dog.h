#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define attributes for a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner's name.
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* Define the dog_t type */
typedef struct dog dog_t;

/* Function prototypes for init_dog and print_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

