#include "hash_tables.h"

/**
 * hash_table_create - func
 * @size: arg
 *
 * Return: hash_table_t
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = NULL;
    
    if(size > 0)
    {
        table = malloc( sizeof(hash_table_t) );
        
        if( table )
        {
            table->size = size;
            table->array = malloc(sizeof(hash_node_t*) * size);
        } 
    }
    return table;
}
