#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;
        int i = 500;
        srand(time(0));
        int lastD = n % 10;
        n = rand() - RAND_MAX / 2;

        if( lastD >= 0 )
        {
                printf("Last digit of %d is %d and %s", n, lastD, lastD == 0 ? "is 0" : "is greater than 5");
        }
        else
        {
                printf("Last digit of %d is %d and is less than 6 and not 0", n, lastD);
        }

        return (0);
}
