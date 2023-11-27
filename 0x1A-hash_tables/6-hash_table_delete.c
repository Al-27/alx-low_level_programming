#include "hash_tables.h"

/**
 * hash_table_delete - func
 * @ht: arg
 *
*/
void hash_table_delete(hash_table_t *ht)
{
    u_long i = 0;
    
    if(ht)
    {
        for(;i<ht->size;i++)
        {            
            rec_free( ht->array[i]);
        }
        
        free(ht->array);
        free(ht);
        ht = NULL;
    }
}

#include "hash_tables.h"

/**
 * rec_free - func
 * @elem: arg
 *
*/
void rec_free(hash_node_t* elem)
{
    if(elem)
    {
        if(elem->next)
        {
            rec_free(elem->next);
            
        }
        free(elem->key);
        free(elem->value);
        free(elem);
        
        elem->key= NULL;
        elem->value= NULL;
        elem = NULL;
    }
}
