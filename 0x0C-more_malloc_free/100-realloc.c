#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * using malloc and free
 * @ptr: pointer to previously allocated memory by malloc
 * @old_size: size of allocated memory for ptr
 * @new_size: size of memory block
 * Return: pointer to newly allocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = (malloc(new_size));
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (m = 0; m < old_size; m++)
			ptr1[m] = old_ptr[m];
	}
	free(ptr);
	return (ptr1);
}
