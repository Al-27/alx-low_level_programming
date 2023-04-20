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
	
	i = 0;
    while(i < 5)
    {
    	if(s == ops[i].op)
		{
			return ops[0].f;
		}
		i++;
    }
	return (null);
}
