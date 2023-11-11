#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    char* cValue = NULL;
    u_long index = 0;
    hash_node_t *tmp = NULL;
    
    if( ht )
    {
        if( key )
        {
            if(valid_key(key))
            {
                
                index = key_index((u_char*) key,ht->size);
                tmp = ht->array[index];
                
                if(tmp)
                {
                    if(!strcmp(key,tmp->key))
                        cValue = ht->array[index]->value;
                    else
                    {
                        index = 0;
                        while(tmp)
                        { 
                            if(!strcmp(key,tmp->key))
                            {
                                cValue = tmp->value;
                            }
                            tmp = tmp->next;
                        }
                        
                    }
                }
                
            }
        }        
    }
    
    return cValue;
}