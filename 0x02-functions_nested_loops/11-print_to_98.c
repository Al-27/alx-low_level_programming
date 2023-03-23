#include <stdio.h> 
#include "main.h"
/**
 * print_to_98 - This is a rand desci
 * @n: First parameter
 *
 */
void print_to_98(int n){
         

        while(1){

                if(n >= 98 ){
                        printf("%d",n--);
                        if(n < 98){
                                putchar('\n');
                                break;
                        }
                        printf(", ");
                }
                else{

                        printf("%d", n++) ;

                        if(n>98){
                                putchar('\n');
                                break;
                        }
                        printf(", ");
                }
        }


}
