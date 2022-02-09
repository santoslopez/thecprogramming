#include <stdio.h>

int main(){
    int x = 10;

    int* dirX = &x;

    float y = 0.5;
    float * dirY = &y;

    printf("El valor de x = %d \n",x);

    printf("Direccion de memoria de x:%p\n",&dirX);

    printf("Valor de y = %1.1f",y);
    printf("Direccion de memoria de y:%p\n",&dirY);
}