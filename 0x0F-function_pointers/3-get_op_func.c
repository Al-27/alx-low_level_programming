#include "3-calc.h"
/**
 * get_op_func - desc
 * @s: param
 *
 * Return: type
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    
    for(i = 0;i < 5;i++)
    {
    	if(s == ops[i].op)
    		return ops[0].f;
    }
	return (null);
}
