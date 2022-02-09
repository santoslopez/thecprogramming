#include <stdio.h>

//realiza una copia de lo que se escribe y lo imprime
int main(){


    int c;

    while((c = getchar())!=EOF){
        putchar(c);
    }
}