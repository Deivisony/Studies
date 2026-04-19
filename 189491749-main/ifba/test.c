#define QTDE_NUMEROS 11

#include <stdio.h>

int main(){

    int iCont;
    int numeros[QTDE_NUMEROS] = {30,30,30,30,40,40,40,40,40,30,30};
    int qtde;
    int maior = 0;

    for(iCont = 0; iCont < QTDE_NUMEROS; iCont++){
        printf("Informe o numero %i sorteado:\\> ", iCont+1);
        scanf("%i", &numeros[iCont]);
    }

    for(iCont = 0; iCont <  QTDE_NUMEROS;  iCont++){
        qtde = 1;
        while(numeros[iCont] == numeros[iCont+1] && iCont <  QTDE_NUMEROS){
            qtde++;
            iCont++;
        }
        if(qtde > maior)
            maior = qtde;
    }

    printf("A quantidade de pontos do jogador foi %i\n", maior);



    return 0;
}
