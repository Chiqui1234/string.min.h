#include <stdio.h>
#include "src/string.min.h"
#define CANT_CHARS 50+1

int main()
{
    char source[CANT_CHARS] = "Argentina, un país con buena gente.";
    char destination[CANT_CHARS] = "";
    
    printf("Programa iniciado\n");
    printf("Destino: %s\n", destination); // No debería imprimir nada, porque destination contiene '\0' únicamente

    if( copy(source, destination) )
        printf("Destino: %s\n", destination); // Tampoco imprime nada :(
}