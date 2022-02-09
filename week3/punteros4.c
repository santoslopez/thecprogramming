#include <stdio.h>

void jugar(int* n){

    //recupera el valor de este puntero
    int y=*n;


    y= (y+2) / 2 + 2 - (3 * y);
    //colocar nuevamente el valor en la celda
    *n = y;
}

int main(){
    int x = 10;

    jugar(&x);

    printf("%d\n",x);
    return 0;
}