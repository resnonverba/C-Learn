#include <stdio.h>

int main()
{
    char text[] = {'h','o','l','a',0}; 
    char text2[] = "hola";

    printf("Primera cadena de caracteres: %s\n", text);
    printf("Primera cadena de caracteres: %s\n", text2);

}



// COMO SE ALMACENARÍA EN EL STACK:
// ================================
// char text1[] = {'h','o','l','a',0}; 
// ->
// text[0] = 'h'
// text[1] = 'o'
// text[2] = 'l'
// text[3] = 'a'
// text[4] = '\0'

// Que es lo mismo que:

// char text2[] = "hola"
// text[0] = 'h'
// text[1] = 'o'
// text[2] = 'l'
// text[3] = 'a'
// text[4] = '\0'





