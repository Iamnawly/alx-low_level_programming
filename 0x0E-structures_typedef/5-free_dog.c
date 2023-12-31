#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */
void free_dog(dog_t *f)
{
	if (f)
	{
		free(f->name);
		free(f->owner);
		free(f);
	}
}

