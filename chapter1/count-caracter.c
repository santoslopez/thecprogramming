#include <stdio.h>


// cuenta caracteres de lo que se ingresa
int main(){
    long nc;

    while(getchar()!=EOF){
        ++nc;
        printf("%ld\n",nc);
    }

}

