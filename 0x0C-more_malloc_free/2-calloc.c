#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(unsigned int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		ptr[i] = nmemb;
	}

	return (ptr);
}