#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    u_long index = 0, isEnd = 0; 
    hash_node_t* node = NULL, *tmp=NULL;
    int success = 0;
    if(ht)
    {
        if(valid_key(key))
        {
            index = key_index((u_char*) key,ht->size);
            isEnd = index == ht->size-1 ? 1 : 0;
            tmp = ht->array[index];
            if(tmp)
            {
                if(!strcmp( key, tmp->key ))
                {
                    free(tmp->value);
                    tmp->value = strdup(value);
                    success =  1;
                }
                else
                {
                    index = 0;
                    
                    while(1)
                    {
                        node = ht->array[index];
                        
                        if(!node && index < ht->size)
                        {
                            node = malloc(sizeof(hash_node_t));
                
                            if(node)
                            {
                                node->key = strdup(key);
                                node->value = strdup(value);
                                node->next = isEnd ? NULL : ht->array[index+1];
                                ht->array[index] = node;
                                success =  1; 
                                break;
                            } 
                            
                        }
                        else if(node)
                            index++;
                        else
                            break;                      
                    }                    
                }
            }
            else
            {
                node = malloc(sizeof(hash_node_t));
                
                if(node)
                {
                    node->key = strdup(key);
                    node->value = strdup(value);
                    node->next = isEnd ? NULL : ht->array[index+1];
                    ht->array[index] = node;
                    success =  1;
                }
            }
        }
    }
    
    return success;
}

u_short valid_key(const char* key)
{
    
    if(key)
    {
        if(strcmp(key,""))
            return 1;
    }
    
    return 0;
}