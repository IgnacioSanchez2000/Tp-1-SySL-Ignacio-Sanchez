#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

//Tp1 Ignacio Sanchez SySL

int main(void){

    printf("Escribir un conjunto de caracteres: ");
    
    char caracter;

    caracter = getchar();

    while(caracter != '\n'){

        if ( isalpha(caracter) != 0 ){
            if( isupper(caracter) != 0){
                caracter = tolower(caracter);
            }else{
                if( islower(caracter) != 0){
                    caracter = toupper(caracter);
                }
            }
            putchar(caracter);
        } else if( isdigit(caracter) != 0){
        } else{
            putchar(caracter);
        }

        caracter = getchar();
    }

    return EXIT_SUCCESS;
}