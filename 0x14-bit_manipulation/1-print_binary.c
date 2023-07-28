#include "main.h" 
 
/** 
* print_binary - desc  
* @n: arg  
*  
*/ 
void print_binary(unsigned long int n)
{
    
    int i = sizeof(ulInt) * 8 - 1;
    int init = 0;
    char c0;
    
    for(;i >= 0 ; i--)
    {
        if( (!init) && (n >> i & 0) )
        	continue;
        else if( (!init) && (n >> i & 1) )
        {
            init = 1;
        }
        
        if( init ){
            c0 = 48 + (n >> i & 1);
            write(1,&c0,1);
   		}
    }
    if( !init ){
            c0 = 48;
            write(1,&c0,1);
   		}

}
