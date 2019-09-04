#include <stdio.h>
#include "string.min.h"
/**
 * Author: Santiago Gimenez
 * GitHub: github.com/Chiqui1234
 * Repository: https://github.com/Chiqui1234/string.min.h
 * -------------------------------------------------------------------------------------------------------------------------------------
 * NOTA: Si quiero editar el contenido es vital no modificar la dirección de memoria (punteros constantes do the trick): char * const x
 * En caso de querer moverse por la posición de memoria pero no editar su contenido, un puntero aconstante cómo por ejemplo
 * const char *src funciona. Personalmente no me gusta mover las posiciones de memoria, así que es mejor siempre crear una variable que
 * adicione a la dirección de memoria, cómo hago por ejemplo en la función "copy".
 * -------------------------------------------------------------------------------------------------------------------------------------
 */ 
BOOL copy(const char *src, char * const destination) 
{
    /**
     * @param char *src es un puntero a la posición desde dónde se desea comenzar a copiar
     * @param char *destination es un puntero a la posición dónde se desea pegar el contenido
     * @return devuelve si la copia fue exitosa o no pudo realizarse. Por ahora, siempre dará TRUE :D
     */
    int i = 0;
    while( *(src+i) )
    {
        *(destination+i) = *(src+i);
        i++;
    }
        
    *(destination+i+1) = '\0';

    return TRUE; // Se terminó la copia
}