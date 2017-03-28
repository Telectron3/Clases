#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial = 1;
    int i;

    for( i = 5; i>0 ;i--)
    {
        factorial *=i;
    }
    printf("El factorial es: %d\n",factorial);

    return 0;
}
