#include "hash_tables.h"

/**
 * hash_table_print - func
 * @ht: arg
 *
*/
void hash_table_print(const hash_table_t *ht)
{
    u_long i = 0, printed = 0;
    hash_node_t *tmp = NULL;
    
    if(ht)
    {
        printf("{");
        
        for(;i < ht->size;i++)
        {
            tmp = ht->array[i];
            
            while(tmp)
            {
                if(printed) printf(", ");
                
                printf("'%s': '%s'",tmp->key,tmp->value);
                printed=1;
                
                tmp = tmp->next;
            }
        }
        
        printf("}\n");
    }
    
}
