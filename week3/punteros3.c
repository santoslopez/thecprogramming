#include <stdio.h>

void jugar(int n){
    n = (n + 3) * 2 - 1;

    printf("%d\n",n);
}


int main(){
    int x=10;

    jugar(x);

    printf("%d\n",x);
    return 0;
}