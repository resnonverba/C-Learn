#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int random;
    srand(time(0));
    random = rand() - RAND_MAX / 2;
    if (random > 0)
        printf("Es positivo: %d", random);
    else if (random == 0)
    {
        printf("Es cero: %d", random);
    }
    else 
    {
        printf("Negativo");
    }
    return 0;
}

