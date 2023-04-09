#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    if (size < 1)
        return (NULL);

    /* Allocate the table itself */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Allocate array of size 'size' */
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL) {
        free(ht);
        return (NULL);
    }

    /* Initialize each element to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->size = size;

    return (ht);
}
