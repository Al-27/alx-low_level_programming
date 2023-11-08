#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    u_long i = 0, printed = 0;
    hash_node_t *tmp = NULL;
    printf("{");
    
    if(ht)
    {
        for(;i < ht->size;i++)
        {
            tmp = ht->array[i];
            
            if(tmp)
            {
                if(printed) printf(", ");
                
                printf("'%s': '%s'",tmp->key,tmp->value);
                printed=1;
            }
        }
    }
    
    printf("}\n");
}