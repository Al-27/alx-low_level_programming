#include "hash_tables.h"

/**
 * hash_table_delete - func
 * @ht: arg
 *
*/
void hash_table_delete(hash_table_t *ht)
{
    u_long i = 0;
    hash_node_t *tmp = NULL;
    
    if(ht)
    {
        for(;i<ht->size;i++)
        {
            tmp = ht->array[i];
            
            if(tmp)
            {
                free(tmp->key);
                free(tmp->value);
                free(tmp);
                tmp = NULL;
            }
        }
        
        free(ht->array);
        free(ht);
        ht = NULL;
    }
}
