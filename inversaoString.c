#include <stdio.h>

int main(){
    int loop, loopInvertido=0;
    char frase[20]="teste";
    char fraseInvertida[20];

    for(loop=9; loop>=0; loop--){
        if(frase[loop]!=NULL){
            fraseInvertida[loopInvertido++] = frase[loop];
        }
    }
   
    printf("Frase original: %s\n", frase);
    printf("Frase invertida: %s", fraseInvertida);
}