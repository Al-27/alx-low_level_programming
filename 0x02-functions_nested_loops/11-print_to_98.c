#include "main.h"
/**
 * print_to_98 - This is a rand desci
 * @n: First parameter
 *
 */
void print_to_98(int n){
         

        while(1){

                if(n >= 98 ){
                        _putchar((n--) + '0');
                        if(n < 98){
                                _putchar('\n');
                                break;
                        }
                        _putchar(",");
                        _putchar(" ");
                }
                else{

                        _putchar((n++) + '0');

                        if(n>98){
                                _putchar('\n');
                                break;
                        }
                        _putchar(",");
                        _putchar(" ");
                }
        }


}
