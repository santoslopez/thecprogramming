#include <stdio.h>

// imprime la tabla fahrenheit celsius

int main(){

    float fahr,celsius;
    int lower,upper,step;


    //limite inferior de la tabla de temperaturas
    lower=0;

    //limite superior
    upper = 300;
    //tamano de incremento

    step = 20;

    fahr = lower;

    while(fahr<=upper){
        celsius = 5.0 * (fahr-32.0)/9.0;
        printf("%3f\t%6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
}